/**
 * Implementation of ADT Map for SynCContest: initialize and query maps
 */

#include "kcg_consts.h"             /* for constants used in SCADE */
//#include "kcg_sensors.h"          /* not needed */
#include <stdlib.h>                 /* for ??? */
#include <stdio.h>                  /* for log messages */
#include <math.h>                   /* for geometry */

#include "map.h"                    /* for internal declarations */
#include "MapADT_City.h"            /* for SCADE interface */

/* for compatibility with old code */
#define mapdata_ty outC_MapADT_City
#define map_getData MapADT_City

FILE* logfile = NULL;

void
kcg_print_colorTy(colorTy* c)
{
  printf("(%d,%d,%d)", c->red, c->green, c->blue);
}

kcg_bool
kcg_iseq_colorTy(const colorTy* kcg_c1, const colorTy* kcg_c2) 
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->blue == kcg_c2->blue);
  kcg_equ = kcg_equ & (kcg_c1->green == kcg_c2->green);
  kcg_equ = kcg_equ & (kcg_c1->red == kcg_c2->red);
  return kcg_equ;
}

/**
 * ============================================================================= 
 * Set of maps
 * =============================================================================
 */
mapstate_ty  maps = { 0, 0, -1 };

/** Check that the given map identifier is correct */
int
map_check_id(int mapid) {
  if (maps.map_sz > 0 &&
      mapid >= 0 &&
      maps.map_sz > mapid)
    return 1;
  return 0;
}

/** Get the map given by the identifier (supposed correct) */
map_ty* 
maps_getAt(int mapid)
{
  if ((mapid < 0) || (mapid >= maps.map_sz))
    return NULL;
  else
    return &(maps.map_arr[mapid]);
}

/** Set the current map (supposed correct) */
void 
maps_setCrtMap(int mapid)
{
  maps.crt_map = mapid;
}

/* ============================================================================= 
 * Initialisation
 * =============================================================================
 */

/** Allocate the array of maps, not initialized */
void
maps_alloc(int sz) {
  if (sz < 1)
    sz = 1;
  maps.map_arr = (map_ty*) calloc(sz, sizeof(map_ty));
  maps.map_sz = sz;
  maps.crt_map = 0;
}

/** Oneway road of minimal speed, from down-left to top-right */
void
map_init_oneway(int mapid) {
  map_ty* map = &(maps.map_arr[mapid]);
  
  map->name = "oneway_line";
  
  /* roads */
  map->road_sz = 1;
  map->road_arr = (road_ty*) malloc(sizeof(road_ty) * map->road_sz);
  road_ty* line = map->road_arr;
  line->kind = RD_LINE_1;
  line->color = COL_ROADLINE;
  line->maxSpeed = SPEED_MIN;
  line->u.line.startp.x = 50;
  line->u.line.startp.y = 50;
  line->u.line.endp.x = 550;
  line->u.line.endp.y = 250;
  line->dirx = (line->u.line.endp.x - line->u.line.startp.x);
  line->diry = (line->u.line.endp.y - line->u.line.startp.y);
  
  /* traffic lights */
  map->tlight_sz = 0;
  map->tlight_arr = NULL;
  
  /* waypoints */
  map->wayp_sz = 1;
  map->wayp_arr = (waypoint_ty*) malloc(sizeof(waypoint_ty));
  waypoint_ty* wp = map->wayp_arr;
  wp->position.x = 550;
  wp->position.y = 250;
  wp->road = 0;
  
  /* stop points */
  map->stop_sz = 0;
  map->stop_arr = NULL;
}

void
maps_init() {
  maps_alloc(1);
  map_init_oneway(0);
}


/** Initialize the array of maps with TEN MAPS
 *  read from files inputs/<n>.map
 *
 *  The input format is:
 *  map <name>
 *  rd <n>
 *  line <dir> <maxSpeed> <startX> <startY> <endX> <endY>
 *  arc  <dir> <maxSpeed> <centerX> <centerY> <radius> <startAngle> <endAngle>
 *  wp <n>
 *  <road> <X> <Y>
 *  tl <n>
 *  <road> <X> <Y> <delayR> <delayA> <delayG> <dephase>
 *  sp <n>
 *  <road> <tlight> <X> <Y>
 *  end
 *
 *  where <*X>, <*Y>, <radius> are given as decimal numbers 
 *                                 in (0,0) to (600,300)
 *        speeds are integer numbers
 *        <dir> are 1 or 2
 *        roads, waitpoints, stops and traffic lights are indexed from 0
 *        delays are given in time units [1,5]
 *        dephase is an integer in [2,10]
 */
int map_read(int mid); // forward declaration
void
maps_read()
{
  /** initialize log file */
  logfile = fopen("exe.log", "w");
  logmsg("Start simulation: %d\n", 0);
  
  /** allocate a collection of 10 maps */
  maps_alloc(10);
  
  for (int i = 0; i < 10; i++) {
    map_read(i);
  }
}

/** Reads one map at identifier @param{mid}
 *  @return 0 if no error, != 0 otherwise
 *  The input format is:
 *  map <name>
 *  rd <n>
 *  line <dir> <maxSpeed> <startX> <startY> <endX> <endY>
 *  arc  <dir> <maxSpeed> <centerX> <centerY> <radius> <startAngle> <endAngle>
 *  wp <n>
 *  <road> <X> <Y>
 *  tl <n>
 *  <road> <X> <Y> <delayR> <delayA> <delayG> <dephase>
 *  sp <n>
 *  <road> <tlight> <X> <Y>
 *  end
 * 
 *  where <*X>, <*Y>, <radius> are given as decimal numbers
 *                                 in (0,0) to (600,300)
 *        speeds are integer numbers
 *        <dir> are 1 or 2 (NYI)
 *        roads, waitpoints, stops and traffic lights are indexed from 0
 *        delays are given in time units [1,5]
 *        dephase is an integer in [2,10]
 */
int
map_read(int mid) {
  
  if (mid < 0 ||
      mid >= maps.map_sz ||
      maps.map_arr == NULL) {
    error("Error 0 [map_read]: incorrect map identifier %d!", mid);
    return 1;
  }
  
  char fname[200];
  sprintf(fname, "%s/%02d.map", DIR_INPUTS, mid);
  
  /* read the file */
  FILE *f = fopen(fname, "r");
  if (f == NULL) {
    error("Error 0 [map_read]: 'DIR_INPUTS/%02d.map' file not found!\n default input.\n", 
	   mid);
    map_init_oneway(0);
    return 1;
  }
  
  map_ty* map = &(maps.map_arr[mid]);
  
  /* initialise the map name */
  map->name = (char*) calloc(20, sizeof(char));
  
  /* read "map <mapname>" */
  char kword[15];
  int rcode = fscanf(f, "%s %s", kword, map->name);
  if ((rcode == EOF) || (strcmp(kword,"map") != 0)) {
    error("Error %d [map_read]: 'map' line!\n default input!", 2);
  err: free(map->name);
    map_init_oneway(0);
    return 1;
  }
  
  /* read "rd <number>" for number of roads */
  rcode = fscanf(f, "%s %d", kword, &(map->road_sz));
  if ((rcode == EOF) ||
      (strcmp(kword, "rd") != 0) ||
      (map->road_sz <= 0) ||
      (map->road_sz >= 50))
    {
      error("Error %d [map_read]: 'rd' line!\n default input!", 3);
      goto err;
    }
  map->road_arr = (road_ty*) malloc(map->road_sz * sizeof(road_ty));
  /* read roads */
  for (int i = 0; i < map->road_sz; i++) {
    road_ty* rd = &(map->road_arr[i]);
    rcode = fscanf(f, "%s", kword);
    if (rcode == EOF) {
      error("Error %d [map_read]: 'line|arc' expected!\n default input!", 4);
      goto err;
    }
    if (strcmp(kword,"line") == 0) {
      int nbdir = 0;
      // read "line <dir> <maxSpeed> <startX> <startY> <endX> <endY>"
      rcode = fscanf(f, "%d %ld %lf %lf %lf %lf",
		     &nbdir, &(rd->maxSpeed),
		     &(rd->u.line.startp.x), &(rd->u.line.startp.y),
		     &(rd->u.line.endp.x), &(rd->u.line.endp.y));
      if ((rcode == EOF) ||
	  (nbdir < 1) ||
	  (nbdir > 2) ||
	  (rd->maxSpeed <= 0) ||
	  (rd->maxSpeed >= SPEED_MAX) ||
	  (rd->u.line.startp.x <= MIN_X) ||
	  (rd->u.line.startp.x >= MAX_X) ||
	  (rd->u.line.endp.x <= MIN_X) ||
	  (rd->u.line.endp.x >= MAX_X) ||
	  (rd->u.line.startp.y <= MIN_Y) ||
	  (rd->u.line.startp.y >= MAX_Y) ||
	  (rd->u.line.endp.y <= MIN_Y) ||
	  (rd->u.line.endp.y >= MAX_Y)) {
	error("Error 5 [map_read]: 'line' %d format error!\n default input!",i);
	goto err;
      }
      rd->color = COL_ROADLINE;
      rd->kind = (nbdir == 1)? RD_LINE_1 : RD_LINE_2;
      rd->dirx = (rd->u.line.endp.x - rd->u.line.startp.x);
      rd->diry = (rd->u.line.endp.y - rd->u.line.startp.y);
    }
    else if (strcmp(kword, "arc") == 0) {
      int nbdir = 0;
      // read "arc <dir> <maxSpeed> <centerX> <centerY> <radius> <startAngle> <endAngle>"
      rcode = fscanf(f, "%d %ld %lf %lf %f %f %f",
		     &nbdir, &(rd->maxSpeed),
		     &(rd->u.arc.center.x), &(rd->u.arc.center.y),
		     &(rd->u.arc.radius),
		     &(rd->u.arc.startangle),
		     &(rd->u.arc.endangle));
      if ((rcode == EOF) ||
	  (nbdir != 1) ||
	  (rd->maxSpeed <= 0) ||
	  (rd->maxSpeed >= SPEED_MAX) ||
	  (rd->u.arc.center.x <= MIN_X) ||
	  (rd->u.arc.center.x >= MAX_X) ||
	  (rd->u.arc.center.y <= MIN_Y) ||
	  (rd->u.arc.center.y >= MAX_Y) ||
	  (rd->u.arc.radius <= 0) ||
	  (rd->u.arc.startangle < -180.0) ||
	  (rd->u.arc.startangle >= 360.0) ||
	  (rd->u.arc.endangle < -180.0) ||
	  (rd->u.arc.endangle >= 360.0))
	{
	  error("Error 6 [map_read]: 'line' %d format error!\n default input!",i);
	  goto err;
	}
      rd->color = COL_ROADLINE;
      rd->kind = RD_ARC;
      rd->dirx = 0.0;
      rd->diry = (rd->u.arc.startangle < rd->u.arc.endangle) ? -1.0 : 1.0; 
    }
    else {
      error("Error 7 [map_read]: road %d keyword line or arc absent!\n", i);
      goto err;
    }
  }
  logmsg("[map_read]: read %d roads... continue\n", map->road_sz);
  
  /* read until "wp" encountered */
  while (true) {
    rcode = fscanf(f, "%s", kword);
    if ((rcode == EOF) ||
	(strcmp(kword, "end") == 0)) {
      logmsg("Warning [map_read]: %d wait point defined!\n", 0);
      return 0;
    }
    if (strcmp(kword, "wp") == 0)
      break;
  }
  /* read "wp", read its number */
  rcode = fscanf(f, "%d", &(map->wayp_sz));
  if ((rcode == EOF) ||
      (map->wayp_sz <= 0) ||
      (map->wayp_sz >= 50)) {
    logmsg("Warning [map_read]: read 'wp %d' bad number!\n", map->wayp_sz);
    return 0;
  }
  map->wayp_arr = (waypoint_ty*) calloc(map->wayp_sz, sizeof(waypoint_ty));
  for (int i = 0; i < map->wayp_sz; i++) {
    waypoint_ty* wp = &(map->wayp_arr[i]);
    /* read <road> <X> <Y> */
    rcode = fscanf(f, "%d %lf %lf",
		   &(wp->road),
		   &(wp->position.x), &(wp->position.y));
    if ((rcode == EOF) ||
	(wp->road < 0) ||
	(wp->road >= map->road_sz) ||
	(wp->position.x <= MIN_X) ||
	(wp->position.x >= MAX_X) ||
	(wp->position.y <= MIN_Y) ||
	(wp->position.y >= MAX_Y)) {
      error("Error 8 [map_read]: waypoint %d not correct!\n", i);
      map->wayp_sz = i;
      break;
    }      
  }
  logmsg("[map_read]: read %d waypoints... continue\n", map->wayp_sz);
  
  /* read until "tl" encountered */
  while (true) {
    rcode = fscanf(f, "%s", kword);
    if ((rcode == EOF) ||
	(strcmp(kword, "end") == 0)) {
      logmsg("Warning [map_read]: %d traffic light defined!\n", 0);
      return 0;
    }
    if (strcmp(kword, "tl") == 0)
      break;
  }
  /* read "tl", read its number */
  rcode = fscanf(f, "%d", &(map->tlight_sz));
  if ((rcode == EOF) ||
      (map->tlight_sz < 0) ||
      (map->tlight_sz >= 50)) {
    logmsg("Warning [map_read]: read 'tl %d' bad number!\n", map->tlight_sz);
    goto endread;
  }
  if (map->tlight_sz == 0)
    goto endread;
  map->tlight_arr = (tlight_ty*) calloc(map->tlight_sz, sizeof(tlight_ty));
  for (int i = 0; i < map->tlight_sz; i++) {
    tlight_ty* tl = &(map->tlight_arr[i]);
    /* read <road> <X> <Y> <delayR> <delayA> <delayG> <dephase> */
    rcode = fscanf(f, "%d %lf %lf %ld %ld %ld %ld",
		   &(tl->road),
		   &(tl->tl.pos.x), &(tl->tl.pos.y),
		   &(tl->tl.tRed), &(tl->tl.tAmber), &(tl->tl.tGreen),
		   &(tl->tl.tPhase));
    printf ("tl %d %d<%d %lf %lf %ld %ld %ld %ld",
	    i, tl->road, map->road_sz, tl->tl.pos.x, tl->tl.pos.y,
	    tl->tl.tRed, tl->tl.tAmber, tl->tl.tGreen,
	    tl->tl.tPhase);
    if ((rcode == EOF) ||
	(tl->road < 0) ||
	(tl->road >= map->road_sz) ||
	(tl->tl.pos.x <= MIN_X) ||
	(tl->tl.pos.x >= MAX_X) ||
	(tl->tl.pos.y <= MIN_Y) ||
	(tl->tl.pos.y >= MAX_Y)) {
      error("Error 9 [map_read]: traffic light %d not correct!\n", i);
      map->tlight_sz = i;
      break;
    }
  }
  logmsg("[map_read]: read %d traffic light... continue\n", map->tlight_sz);
  
  /* read until "st" encountered */
  while (true) {
    rcode = fscanf(f, "%s", kword);
    if ((rcode == EOF) ||
	(strcmp(kword, "end") == 0)) {
      logmsg("Warning [map_read]: %d stops defined!\n", 0);
      goto endread;
    }
    if (strcmp(kword, "st") == 0)
      break;
  }
  /* read "st", read its number */
  rcode = fscanf(f, "%d", &(map->stop_sz));
  if ((rcode == EOF) ||
      (map->stop_sz < 0) ||
      (map->stop_sz > map->tlight_sz)) {
    logmsg("Warning [map_read]: read 'st %d' bad number!\n", map->stop_sz);
    goto endread;
  }
  if (map->stop_sz == 0)
    goto endread;
  
  map->stop_arr = (stop_ty*) calloc(map->stop_sz, sizeof(stop_ty));
  for (int i = 0; i < map->stop_sz; i++) {
    stop_ty* st = &(map->stop_arr[i]);
    /* read <road> <tlight> <X> <Y> */
    rcode = fscanf(f, "%d %d %lf %lf",
		   &(st->road), &(st->sema),
		   &(st->position.x), &(st->position.y));
    if ((rcode == EOF) ||
	(st->road < 0) ||
	(st->road >= map->road_sz) ||
	(st->sema < 0) ||
	(st->sema >= map->tlight_sz) ||
	(st->position.x <= MIN_X) ||
	(st->position.x >= MAX_X) ||
	(st->position.y <= MIN_Y) ||
	(st->position.y >= MAX_Y)) {
      logmsg("Error 10 [map_read]: stop %d not correct!\n", i);
      map->stop_sz = i;
      break;
    }
  }
  logmsg("[map_read]: read %d stops... end\n", map->stop_sz);
  
  /* ignore all until "end" */
  
 endread:
  fclose(f);
  return 0;
}

/** Initialize the array of maps */
void MapADT_init_City(outC_MapADT_City *outC)
{
  maps_read(); 
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MapADT_reset_City(outC_MapADT_City *outC)
{
  maps_read(); 
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


/*
 * =========================================================================
 * Geometry
 * =========================================================================
 */

/** Euclidian distance betwen two points (xa,ya) and (xb,yb) */
double
distance(float xa, float ya, float xb, float yb)
{
  /* use of math.h function */
  return hypot(xa - xb, ya - yb);
}

/** Convert angle from radian to degree */
double
todegree(double a)
{
  return (a * 180.0) / M_PI;
}

/** Convert angle from degree to radian */
double
toradian(double a)
{
  return (a * M_PI) / 180.0;
}

/** Get the cadran of the angle (in degree) */
int
tocadran(double a) {
  if ((0 <= a && a < 90) ||
      (-360 <= a && a < -270))
    return 1;
  if ((90 <= a && a < 180) ||
      (-270 <= a && a < -180))
    return 2;
  if ((180 <= a && a < 270) ||
      (-180 <= a && a < -90))
    return 3;
  return 4;
}

/** Angle (in degree) of a segment */
double
lineAngle(float x1, float y1, float x2, float y2)
{
  /* use of math.h function for arctan */
  return todegree(atan2(y2-y1,x2-x1));
}

/** Angle inside an arc delimited by (from,to) */
bool
isInArc(double a, double from, double to)
{
  if (from < to) {
    // trigo direction
    return (from <= a && a <= to) ||
	(from <= (a+360) && (a+360) <= to);
  }
  else{
    // clock direction
    return (to <= a && a <= from) ||
	(to <= (a+360) && (a+360) <= from);
  }
}


/** Angles in ordred inside an arc delimited by (from,to) */
bool
fourAnglesInOrder(double from,double x,double y, double to)
{
  if (from < to) {
    // trigo direction
    return (from<=x && x<=y && y<=to) ||
      (from<=x+360 && x+360<=y+360 && y+360<=to) ||
      (from<=x && x<=y+360 && y+360<=to) ||
      (from<=x+360 && x+360<=y && y<=to);	
  }
  else  {
    // clock direction
    return (to <= y && y<=x && x <= from) ||
      (to <= y+360 && y+360<=x+360 && x+360 <= from) ||
      (to <= y+360 && y+360<=x && x <= from) ||
      (to <= y && y<=x+360 && x+360 <= from);
  }
}

/** Product of two vectors for directions */
double
dirProd(float dir1x, float dir1y, float dir2x, float dir2y)
{
  return dir1x * dir2x + dir1y * dir2y;
}

double
dirVProd(float dir1x, float dir1y, float dir2x, float dir2y)
{
  return dir1x * dir2y - dir1y * dir2x;
}

/** Size of a direction vector */
double
dirNorm(float dir1x, float dir1y)
{
  /* use of math.h function */
  return hypot(dir1x, dir1y);
}

/** Cos of directions */
double
dirCos(float dir1x, float dir1y, float dir2x, float dir2y)
{
  return dirProd(dir1x, dir1y, dir2x, dir2y)
    / (dirNorm(dir1x, dir1y) * dirNorm(dir2x, dir2y));
}

/** Project point (x,y) on line d(p1,p2) and
 *  return result on (px, py)
 */
void
dirProjPoint( /* IN  */ float x, float y, positionTy * p1, positionTy * p2,
	      /* OUT */ float *px, float *py)
{
  //compute direction vector for d(p1, p2)
  double	  dirx = p2->x - p1->x;
  double	  diry = p2->y - p1->y;
  double	  dirn = dirNorm(dirx, diry);
  
  //compute P1 - H
  double	  p1h = ((x - p1->x) * dirx + (y - p1->y) * diry) / dirn;
  
  //compute h
  (*px) = p1->x + (p1h * dirx) / dirn;
  (*py) = p1->y + (p1h * diry) / dirn;
  
  return;
}

/*
 * =========================================================================
 * Utilities
 * =========================================================================
 */

/** Get the stored infos about the traffic lights in the current map
 *
 * @param tl  array to be filled
 * @param sz size of tl
 */
void
mapdata_getTLight(paramTLTy_City * tl, int sz)
{
  for (int i = 0; i < sz; i++)
    tl[i] = (paramTLTy_City) { {0, 0}, 0, 0, 0, 0 };
  
  int mapid = maps.crt_map;
  if (maps.map_arr != NULL &&
      mapid >= 0 &&
      maps.map_arr[mapid].tlight_sz > 0) {
    for (int i = 0;
	 (i < sz) &&
	   (i < maps.map_arr[mapid].tlight_sz);
	 i++)
      tl[i] = maps.map_arr[mapid].tlight_arr[i].tl;
  } 
}

/** Return the default values 
 *  and the stored infos about traffic lights
 */
mapdata_ty
mapdata_default(void)
{
  mapdata_ty	  r;
  r.MapData.color = COL_OUT;
  r.MapData.onRoad = false;
  r.MapData.maxSpeed = SPEED_MIN;
  r.MapData.TLnumber = -1;
  r.MapData.TLrequired = false;
  r.MapData.dirx = -1.0;
  r.MapData.diry = 0.0;
  mapdata_getTLight(r.ParamsTL, TL_NUMBER);
  return r;
}

mapdata_ty
mapdata_init(void)
{
  return mapdata_default();
}

/*
 * =========================================================================
 * Query functions for roads
 * =========================================================================
 */
bool
map_isOnRoadLine1( /* IN  */ road_ty * rd, float x, float y,
		   /* OUT */ colorTy * col, double *d, float *dirX, float *dirY)
{
  //test that may be inside road area
  // -compute projection on line
  float		  px = 0.0;
  float		  py = 0.0;
  dirProjPoint(x, y, &(rd->u.line.startp), &(rd->u.line.endp), &px, &py);
  //-compare with ends of the segment
  if ((px <= fmax(rd->u.line.startp.x, rd->u.line.endp.x)+EPS) &&
      (px >= fmin(rd->u.line.startp.x, rd->u.line.endp.x)-EPS) &&
      (py <= fmax(rd->u.line.startp.y, rd->u.line.endp.y)+EPS) &&
      (py >= fmin(rd->u.line.startp.y, rd->u.line.endp.y)-EPS))
    //the projection is inside, compute distance to rd
    (*d) = distance(x, y, px, py);
  else
    //the projection is outside the segment
    // let us test the extremities:
    (*d) = fmin(distance(x,y,rd->u.line.startp.x,rd->u.line.startp.y),
		distance(x,y,rd->u.line.endp.x,rd->u.line.endp.y));
  
  //-compare with the width of the road
  if ((*d) >= RD_SIZE_HALF_WIDTH) {
    logmsg("Position too far from road: %f!\n", *d);
    return false;
  }
  
  (*col) = rd->color;
  (*dirX) = rd->u.line.endp.x - rd->u.line.startp.x;
  (*dirY) = rd->u.line.endp.y - rd->u.line.startp.y;
  
  if ((*d) < RD_SIZE_LINE) {
    //distance less than width of the road line,
    //then on road with one color
    logmsg("Position on road line: %f!\n", *d);
  }
  else {
    //otherwise, compute the side of the road
    // left or right using direction(x, y)->(px, py)
    double	    dirPX = px - x;	/* -b where b = x1 - x2 */
    double	    dirPY = py - y;	/* a  where a = y2 - y1 */
    double	    sinDir = dirVProd(*dirX, *dirY, dirPX, dirPY);
    if (sinDir < 0) {
      //on left
      (*col) = COL_ROADLEFT;
      if ((*d) <= RD_SIZE_LINE2) 
	col->green = (unsigned int)(255.*((*d)-1.0));
    } else {
      //on right
      (*col) = COL_ROADRIGHT;
      if ((*d) <= RD_SIZE_LINE2) 
	col->red = (unsigned int)(255.*((*d)-1.0));
    }
    logmsg("Position on road: %f!\n", *d);
  }
  return true;
}

bool
map_isOnRoadLine2( /* IN  */ road_ty * rd, float x, float y,
		   /* OUT */ colorTy * col, double *d, float *dirX, float *dirY)
{
  return false;
  //TODO
}

bool
map_isOnRoadArc( /* IN  */ road_ty * rd, float x, float y,
		 /* OUT */ colorTy * col, double *d, float *dirX, float *dirY)
{
  //center
  double	  cx = rd->u.arc.center.x;
  double	  cy = rd->u.arc.center.y;
  
  //compute angle(in degrees) from center
  double	  a = lineAngle(cx, cy, x, y);
  
  //compute signed distance to the circle c
  double     dist_c = distance(cx, cy, x, y) - rd->u.arc.radius;
  
  if (isInArc(a, rd->u.arc.startangle,rd->u.arc.endangle)) {
    //within the angle
    (*d) = fabs(dist_c);
  }
  else {
    //Point outside road angles,
    //  consider the distance to extremities 
    (*d) = fmin(distance(x,y,
			 cx+rd->u.arc.radius*cos(toradian(rd->u.arc.startangle)),
			 cy+rd->u.arc.radius*sin(toradian(rd->u.arc.startangle))),
		distance(x,y,
			 cx+rd->u.arc.radius*cos(toradian(rd->u.arc.endangle)),
			 cy+rd->u.arc.radius*sin(toradian(rd->u.arc.endangle))));
  }
  
  if ((*d) >= RD_SIZE_HALF_WIDTH) {
    logmsg("Position too far from road: %f!\n", (*d));
    return false;
  }
  
  (*col) = rd->color;
  
  //direction is normal to d(c, (x, y))
  //its sign depends on rotation
  if (rd->u.arc.startangle < rd->u.arc.endangle){//counterclockwise
    (*dirX) = cy - y;
    (*dirY) = x - cx;
  }
  else {//clockwise
    (*dirX) = y - cy;		/* a where a = y2 - y1 */
    (*dirY) = cx - x;		/* b where b = x1 - x2 */
  }
  
  if ((*d) < RD_SIZE_LINE) {
    //distance less than width of the road line,
    //then on road with one color
    logmsg("Point on road line: %f!\n", *d);
  } else {
    //otherwise, compute the side of the road
    // left or right using the sense(trigo or clock) of the road
    if (((rd->u.arc.startangle < rd->u.arc.endangle) //trigo dir
         && dist_c < 0) ||
	((rd->u.arc.startangle > rd->u.arc.endangle) // clock dir
         && dist_c > 0)) {
      (*col) = COL_ROADLEFT;
      if ((*d) <= RD_SIZE_LINE2) 
	col->green = (unsigned int)(255.*((*d)-1.0));
    } else {
      (*col) = COL_ROADRIGHT;
      if ((*d) <= RD_SIZE_LINE2) 
	col->red = (unsigned int)(255.*((*d)-1.0));
    }
  }
  logmsg("Point on road: %f!\n", *d);
  return true;
}

/*
 * =========================================================================
 * Query functions for waypoints
 * =========================================================================
 */

bool
isPositionOnPoint(float x, float y, road_ty* rd, positionTy* p, double pWidth) 
{
  if (rd->kind == RD_LINE_1 ||
      rd->kind == RD_LINE_2) { // line
    // - compute projection on road line
    float           px = 0.0;
    float           py = 0.0;
    positionTy      startp = {0, 0};
    positionTy      endp = {0, 0};
    
    startp = (rd->u.line.startp);
    endp = (rd->u.line.endp);
    dirProjPoint(x, y, &(startp), &(endp), &px, &py);
    // - compare with the bounds of the waypoint
    double          dwp = distance(px, py, p->x, p->y);
    if (dwp <= pWidth) {
      logmsg("Position near point on line: %lf!\n", dwp);
      return true;
    }
    else {
      logmsg("Position too far from point on line: %lf!\n", dwp);
      return false;
    }
  }
  else {
    // arc
    // - compute angle of point in degrees
    double apoint = lineAngle(rd->u.arc.center.x, rd->u.arc.center.y, p->x, p->y);
    double apos = lineAngle(rd->u.arc.center.x, rd->u.arc.center.y, x, y);
    double dwp = toradian(fabs(apoint - apos))*rd->u.arc.radius;
    if (dwp <= pWidth) {
      logmsg("Position near point on arc: %lf!\n", dwp);
      return true;
    }
    else {
      logmsg("Position too far from point on arc: %lf!\n", dwp);
      return false;
    }
  }
}

colorTy
mapdata_getColorPoint(map_ty * map, int rid, float x, float y)
{
  // first go through waypoints
  for (int i = 0; i < map->wayp_sz; i++) {
    waypoint_ty    *wp = &(map->wayp_arr[i]);
    if (wp->road != rid)
      {
	logmsg("Waypoint not on road %d!\n", rid);
	continue;
      }
    road_ty        *rd = &(map->road_arr[wp->road]);
    // waitpoints are ruban
    if (isPositionOnPoint(x, y, rd, &(wp->position), RD_SIZE_WAYPOINT)) {
      return COL_WAYPOINT;
      //one waypoint by position
    }
  }
  
  // then go to stop points 
  for (int i = 0; i < map->stop_sz; i++) {
    stop_ty        *sp = &(map->stop_arr[i]);
    if (sp->road != rid) {
      logmsg("Stop not on road %d!\n", rid);
      continue;
    }
    road_ty        *rd = &(map->road_arr[sp->road]);
    // stop points are ruban
    if (isPositionOnPoint(x, y, rd, &(sp->position), RD_SIZE_STOP)) {
      return COL_STOP;
      //one stop by position
    }
  }
  return COL_OUT;
}

/*
 * =========================================================================
 * Query functions for stops and traffic lights
 * =========================================================================
 */
int
map_isOnTLight(int x, int y, int rd, float dirX, float dirY)
{
  if (maps.map_arr == NULL ||
      maps.crt_map < 0 ||
      maps.map_arr[maps.crt_map].tlight_arr == NULL ||
      maps.map_arr[maps.crt_map].tlight_sz <= 0)
    return -1;
  //no traffic light
  
  for (int i = 0; i < maps.map_arr[maps.crt_map].tlight_sz; i++) {
    tlight_ty      *tl = &(maps.map_arr[maps.crt_map].tlight_arr[i]);
    if (tl->road != rd)
      continue;
    double	    d = distance(x, y, tl->tl.pos.x, tl->tl.pos.y);


   /* double	    cosdir = dirCos(tl->tl.pos.y - y, x - tl->tl.pos.x,
				    dirX, dirY); */    //MS
   double	    cosdir = dirCos(tl->tl.pos.x-x, tl->tl.pos.y-y,
				    dirX, dirY);     //EA
    if (d < TL_VIEW && cosdir > TL_COSDIR)
      return i;
  }
  return -1;
}

bool
map_isAfterStop(int x, int y, int rid, float dirX, float dirY, int* tl)
{
  (*tl) = -1;
  
  if (maps.map_arr == NULL ||
      maps.crt_map < 0 ||
      maps.map_arr[maps.crt_map].stop_arr == NULL ||
      maps.map_arr[maps.crt_map].stop_sz <= 0)
    return false;
  //no stop points
  
  for (int i = 0; i < maps.map_arr[maps.crt_map].stop_sz; i++) {
    stop_ty        *sp = &(maps.map_arr[maps.crt_map].stop_arr[i]);
    if (sp->road != rid)
      continue;
    // check the distance to the point
    road_ty        *rd = &(maps.map_arr[maps.crt_map].road_arr[sp->road]);
    if (rd->kind == RD_LINE_1 ||
	rd->kind == RD_LINE_2) {
      // line
      // - compute projection on roadline
      float           px = 0.0;
      float           py = 0.0;
      dirProjPoint(x, y, &(rd->u.line.startp), &(rd->u.line.endp), &px, &py);
      // - compare with the bounds of the stop point
      double          dsp = distance(px, py, sp->position.x, sp->position.y);
      double          dirx = px - sp->position.x;
      double          diry = py - sp->position.y;
      if (dsp >= (RD_SIZE_STOP-EPS) &&
	  dsp <= (STP_AFTER+RD_SIZE_STOP+EPS) &&
	  (dirProd(rd->dirx, rd->diry, dirx, diry) >= 0))
	{
	  logmsg("Position AFTER point on line: %lf!\n", dsp);
	  (*tl) = sp->sema;
	  return true;
	}
      else
	{
	  logmsg("Position too far/not AFTER point on line: %lf!\n", dsp);
	  printf("rd->dir(%lf,%lf) <> dir(%lf,%lf)\n", rd->dirx, rd->diry,
		 dirx, diry);
	}
    }
    else {
      // arc
      // -compute angle of point in degrees
      double apoint = lineAngle(rd->u.arc.center.x, rd->u.arc.center.y, 
			        sp->position.x, sp->position.y);
      double apos = lineAngle(rd->u.arc.center.x, rd->u.arc.center.y, x, y);
      double dsp = toradian(fabs(apoint - apos))*rd->u.arc.radius;
      if (dsp >= (RD_SIZE_STOP-EPS) &&
	  dsp <= (STP_AFTER+RD_SIZE_STOP+EPS)) {
	// - check that the direction is AFTER	
	if (fourAnglesInOrder(rd->u.arc.startangle,
			      apoint, apos,
			      rd->u.arc.endangle))
	    {
	      logmsg("Position AFTER point on arc: %lf!\n", apos);
	      (*tl) = sp->sema;
	      return true;
	    }
	  else
	    {
	      logmsg("Position too far/not AFTER point on arc: %lf!\n", apos);
	      return false;
	    }
      }
      else {
	logmsg("Position too far/not AFTER point on arc: %lf degrees!\n", apos);
      }							  
    }
  }
  return false;
}

/*
 * =========================================================================
 * Query function: main
 * =========================================================================
 */

/** Query on map #id for position RobotPos */
void MapADT_City(/* IN  */ positionTy *RobotPos, kcg_int32 id,
		 /* OUT */ outC_MapADT_City *r)
{
  float x = RobotPos->x;
  float y = RobotPos->y;

  // log the input
  logmsg("\n* Query map %ld at ", id);
  logmsg("(%f,", x);
  logmsg("%f)\n", y);
  
  // set current map
  maps_setCrtMap(id);
  long mapid = maps.crt_map;
  
  // initialise results (including traffic light)
  (*r) = mapdata_default();
  
  // get current map
  if (map_check_id(mapid) == false) {
    error("Error [map_getData]: '%ld' not a valid map identifier!\n quit.",
	  mapid);
    return; /* error */
  }
  map_ty         *map = maps_getAt(mapid);
  if (map == NULL) {
    error("Error [map_getData]: '%ld' not a map!\n quit.", mapid);
    return; /* error */
  }
  
  //check on limit bounds using the car width, TODO: consider length also
  if (x <= MIN_X ||
      x >= MAX_X ||
      y <= MIN_Y ||
      y >= MAX_Y) {
    error("Error [map_getData]: car lost outside the allowed space!\n");
    return; /* error */
  }
  
  //initialize result (with traffic lights)
  (*r) = mapdata_init();
  
  //compute the closest road, if any
  int		    min_rd = -1;
  double	    min_d = 700.0;
  for (int rid = 0; rid < map->road_sz; rid++) {
    //logmsg("... compute road %d\n", rid);
    road_ty        *rd = &(map->road_arr[rid]);
    double	    d = 0;
    colorTy	    col = COL_OUT;
    bool	    onRoad = false;
    float	    dirX = 0.0;
    float	    dirY = 0.0;
    switch (rd->kind) {
    case RD_LINE_1:
      onRoad = map_isOnRoadLine1(rd, x, y, &col, &d, &dirX, &dirY);
      break;
    case RD_LINE_2:
      onRoad = map_isOnRoadLine2(rd, x, y, &col, &d, &dirX, &dirY);
      break;
    case RD_ARC:
      onRoad = map_isOnRoadArc(rd, x, y, &col, &d, &dirX, &dirY);
      break;
    default:
      break;
    }
    if (onRoad && (d < min_d)) {
      min_d = d;
      min_rd = rid;
      r->MapData.color = col;
      r->MapData.dirx = dirX;
      r->MapData.diry = dirY;
      r->MapData.maxSpeed = (map->road_arr[min_rd]).maxSpeed;
      //update color when a waypoint or stop
      col = mapdata_getColorPoint(map, rid, x, y);
      if (kcg_iseq_colorTy(&col, &COL_OUT))
	r->MapData.color = r->MapData.color;
      else
	r->MapData.color = col;
    }
  }
  
  //compute the return type
  if (min_rd >= 0) {
    logmsg("Position on road %d!\n", min_rd);
    r->MapData.onRoad = true;
    int tl = -1;
    r->MapData.TLnumber = map_isOnTLight(x, y, min_rd,
					 r->MapData.dirx, r->MapData.diry);
    r->MapData.TLrequired = map_isAfterStop(x, y, min_rd,
					    r->MapData.dirx, r->MapData.diry, &tl);
    if(r->MapData.TLrequired) {
      if (tl != r->MapData.TLnumber) {
	logmsg("Warning: on TL %ld != ", r->MapData.TLnumber);
	logmsg("after TL %d!\n", tl);
      }
      r->MapData.TLnumber = tl;
    }
  }
  //tlights already initialized

  //log the result
  logmsg("** Result: onRoad=%d,", r->MapData.onRoad);
  logmsg(" color=%x,",
	 (r->MapData.color.red << 16) |
	 (r->MapData.color.green << 8) |
	 r->MapData.color.blue);
  logmsg(" dirX=%2.2f,", r->MapData.dirx);
  logmsg(" dirY=%2.2f,", r->MapData.diry);
  logmsg(" tl=%ld,", r->MapData.TLnumber);
  logmsg(" police=%d\n", r->MapData.TLrequired);
  
  return;
}


/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** MapADT_City.dc
** Generation date:  2016-08-26T10:58:10
** Last change date: 2016-09-19
*************************************************************$ */


