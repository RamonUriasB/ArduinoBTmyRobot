#ifndef ArduinoBTmyRobot_h
#define ArduinoBTmyRobot_h
/*Arduino_Mi_Robot
	THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY
	APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT
	HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY
	OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,
	THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
	PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM
	IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF
	ALL NECESSARY SERVICING, REPAIR OR CORRECTION.
	
	ArduinoBTmyRobot.h
	Copyright (C) 2020  Ramon Urias.  All rights reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to <ramon.urias@outlook.com>
*/
#include "Arduino.h"

#define CW 1 //horario
#define CCW 0 //antihorario

#define AHEAD 'W'
#define BACKWARD 'S'
#define RIGHT 'D'
#define LEFT 'A'
#define STOP '@'
#define C_PRESSED 'Q'
#define C_RELEASED 'q'

#define ON HIGH
#define OFF LOW



class ArduinoBTmyRobotClass
{
	public:
		void confBluetooth();
		char bluetoothEventListenner(void);
		void leftWheel(int A_pin, int B_pin);
		void rightWheel(int A_pin, int B_pin);
		void comp1(int A_pin);
		void comp2(int A_pin);
		void comp3(int A_pin);
		void comp4(int A_pin);
		void moveWheels(int L_Wheel, int R_Wheel);
		void stopWheels();
		void implement(int id, bool state);
		
	private:
};



extern ArduinoBTmyRobotClass myRobot;

#endif
