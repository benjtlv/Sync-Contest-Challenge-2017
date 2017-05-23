/**
 * Additional types and constants required by MapADT
 */

#include "kcg_types.h"
#include "kcg_consts.h"
#include <stdio.h>

#ifndef _MAP_H
#define _MAP_H

#define bool  kcg_bool
#define true  (kcg_bool)1
#define false (kcg_bool)0

/*
 * =========================================================================
 * Reference system
 * =========================================================================
 */

/** Size of the Carthesian space (in cm) */
#define MIN_X 0
#define MIN_Y 0
#define MAX_X 600
#define MAX_Y 300

/** Precision of comparison between points */
#define EPS 0.001

/** PI is not defined on math.h for KCG */
#ifndef M_PI
#define M_PI PI
#endif

/** Type of points used, in a Carthesian space */
/** see @code{positionTy} in kcg_types.h */

double toradian(double);

/*
 * =========================================================================
 * Car size
 * =========================================================================
 */

/**
 * Car plan with o-point is the position of camera
 *  
 * +---------------+
 * |  SC      |SB  |
 * |----------o----| SA
 * |          |SD  |
 * +---------------+
 *
 * Dimensions defined as constants in kcg_const.h
 * #define SA (kcg_lit_float64(3.0))
 * #define SB (kcg_lit_float64(3.0))
 * #define SD (kcg_lit_float64(3.0))
 * #define SC (kcg_lit_float64(7.0))
 */
#define CAR_WIDTH       (SB+SD)
#define CAR_HALF_WIDTH   SB

/*
 * =========================================================================
 * Colors
 * =========================================================================
 */

/** Color type @code{colorTy} defined in @see{kcg_types.h} */

/** True colors used 
 *  defined in @see{kcg_const.h} as constants of SCADE 
 *
 * extern const colorTy AMBER;
 * extern const colorTy GRAY;
 * extern const colorTy CYAN;
 * extern const colorTy MAGENTA;
 * extern const colorTy YELLOW;
 * extern const colorTy BLUE;
 * extern const colorTy GREEN;
 * extern const colorTy RED;
 */

/** Symbolic colors used for road, points, etc */
#define COL_ROADLINE   BLUE
#define COL_ROADLEFT   CYAN
#define COL_ROADRIGHT  MAGENTA
#define COL_WAYPOINT   GREEN
#define COL_STOP       RED
#define COL_OUT        GRAY

/** String colors used to print */
#define STR_ROADLINE   "blue"
#define STR_ROADLEFT   "cyan"
#define STR_ROADRIGHT  "magenta"
#define STR_WAYPOINT   "yellow"
#define STR_STOP       "red"
#define STR_TLIGHT     "orange"
#define STR_OUT        "gray"

void      kcg_print_colorTy(colorTy* c);
kcg_bool  kcg_iseq_colorTy(const colorTy* a, const colorTy* b);

/*
 * =========================================================================
 * Road segments and points
 * =========================================================================
 */

/** Kind of road segments */
typedef enum {
  RD_LINE_1 = 0,		/* linear road, one direction */
  RD_LINE_2,		/* linear road, two directions */
  RD_ARC,			/* arc road, one direction */
  RD_OTHER		/* INTERNAL USE ONLY */
}		road_kind_ty;

/** Dimensions used for road (in cm) */
#define RD_SIZE_LINE        1.0
#define RD_SIZE_LINE2       2.0
#define RD_SIZE_HALF_WIDTH  10.0
#define RD_SIZE_WAYPOINT    1.0   /* the size of the half of the ruban */
#define RD_SIZE_STOP        1.0

/** Dimensions for traffic lights (in cm) */
#define TL_NUMBER   5
#define TL_VIEW     50.0
#define TL_COSDIR   0.5
#define STP_AFTER   3.0

/** Speeds */
#define SPEED_MIN 20
#define SPEED_MAX 40

/** Road segment */
typedef struct {
  road_kind_ty	kind;	/* kind to select informations */
  
  colorTy	color;	/* color used on the middle line */
  kcg_float64	dirx;	/* direction vector/sense for line/arc */
  kcg_float64	diry;	
  kcg_int32	maxSpeed;	/* maximal speed */
  
  union {
    struct {	/* parameters for a linear road */
      positionTy	startp;	/* on the middle line */
      positionTy	endp;	/* on the middle line */
    }		line;
    struct {	/* parameters for a arc road */
      positionTy	center;	/* the circle center */
      float	radius;	/* the circle radius (in cm) */
      float	startangle;
      float	endangle;
    }		arc;
  }		u;
}		road_ty;

/** Waypoint used to consult the map */
typedef struct {
  int		road;	/* road identifier */
  positionTy	position;	/* on the middle line of the road */
}		waypoint_ty;

/** Stop point used to signal a traffic light */
typedef struct {
  int		road;	/* road identifier */
  int		sema;	/* traffic light identifier */
  positionTy	position;	/* on the middle line of a road */
}		stop_ty;

/** Traffic lights: added road reference to type 
 * @code{paramTLTy_City} defined in @see{kcg_types.h} */
typedef struct {
  paramTLTy_City tl;
  int		road;	/* road identifier that the tlight controls */
}		tlight_ty;

/*
 * =========================================================================
 * Maps
 * =========================================================================
 */

/** One map contains roads, waypoints, traffic lights and stop points */
typedef struct {
  char           *name;	/* used for filename also */
  road_ty        *road_arr;
  int		road_sz;
  tlight_ty      *tlight_arr;
  int		tlight_sz;
  waypoint_ty    *wayp_arr;
  int		wayp_sz;
  stop_ty        *stop_arr;
  int		stop_sz;
}		map_ty;

/** The set of maps and the active map */
typedef struct {
  map_ty         *map_arr;
  int		map_sz;
  int		crt_map; 
}		mapstate_ty;

/** global variable */
extern mapstate_ty maps;

/*
 * =========================================================================
 * Initialize & Access maps
 * =========================================================================
 */

/** 
 * Initialization of the global data 
 * @see{MapADT_City.c}
 */
void		maps_init ();
void		maps_read ();

/*
 * =========================================================================
 * Utilities
 * =========================================================================
 */

extern FILE* logfile;
//#define isLog 1
#define error printf
#ifdef isLog
#define logmsg(msg,id) fprintf(logfile,msg,id); fflush(logfile)
#else
#define logmsg(msg,id)
#endif

int		map_check_id(int mapid);


/*
 * =========================================================================
 * IO Utilities
 * =========================================================================
 */

/** @see{mapio.h} */

/*
 * =========================================================================
 * Query function
 * =========================================================================
 */

/** @see{MapADT_City.h} */

#endif /* _MAP_H */
