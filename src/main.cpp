/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       User                                                      */
/*    Created:      11/15/2024, 8:44:06 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "main.h"
#include "Videos/video-main.h"

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here
vex::controller Controller1(vex::primary);

int main() {
	video::startThread();
	video::keybindVideos();

	while(true) {
		// Allow other tasks to run
		// this_thread::sleep_for(10);
		wait(100, msec);
	}
}
