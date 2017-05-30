# Sync-Contest-Challenge-2017
This is my main project of my master degree's last year. it is an autonomous driver that can follow straight and curved routes, stop at red lights and stop when an obstacle is in front of it.
Unlike the autonomous cartographer robot project that I did in my master degree's first year, this one went to the end and is finished.

All the photos of the competitions are placed in the pictures/ folder.

Initially, I attended a course named "Synchronous programming" which tought us how to use a famous industrial tool named SCADE, used by most of the biggest companies in the world such as airbus, etc... Then, I participated to the Sync-Contest challenge, a competition sponsorized by the ANSYS (which owns SCADE) and Expectra companies.
Me and my classmate Eric, were the only group representing the university (the other teams were a team from University of Hamburg, Germany, another representing a French engineer school, ENSTA, and the two other teams were two teams from EEID (Engineer school of Paris Diderot. they do not represent the university though).

The project was divided in two part :
- the first part : building a simulator using Scade. The teachers retrieved almost everything, we just had to program the Driver operator, which was the main purpose and the most difficult part.
- the second part : Compile the Scade Driver operator into C code, to embed it into a Lego Mindstorm Robot. This was more difficult than the other project I did because I did not had a high level API such as Lejos (Java).
  We had to handle some more low level things, such as tasks. We did not used "average" C language. It was some kind of embedded C for NXT Osek, the embedded system which was inside the robot.
  
The technical part : the most difficult part was to program a good algorithm to follow the route. Thanks to our teachers and after some research, we programmed a PID controller, which is a physical model that consists in reducing the error over time.
That's why the robot worked so well. 
You can see a video of our robot on this link : https://www.facebook.com/univparisdiderot/videos/1358936590829753/
(facebook is required though, I asked my teacher to retrieve me a link where all the videos may be, but this is the only video I have for the moment)

For the source code : Two folders :
- ELKRIEFF_UZENAT_challenge : contains all the files for exuting Scade.
  If ever you have Scade, execute this file : ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/EIDD_Challenge_SW.xscade
- SyncContest_Robot : This is the most interesting part, and probably the one that is understandle easily, since it is all C code                                       
  (for the most). In Driver/ folder, you have the C code that was compiled from Scade, this is very messy but we are not supposed
  to read it, since we generate it from Scade, so if we want to make a modification, we just use scade.
  The main files are : Driver.oil and Driver_glue.c
  the first one is used to configure the tasks, since the sonar sensor is slow and has 50 ms frequency, and the color sensor has 
  10  ms frequency. The Driver_glue.c is used to make the link between the C code of the Driver operator and the embedded system. 
  This is the file where the NXT Osek API is used to initialize the sensors and give these as inputs for the Driver function. The  
  driver operator contains two output fields that are just the computed speed of the right and left wheels. We just give these 
  values to the two motors.
