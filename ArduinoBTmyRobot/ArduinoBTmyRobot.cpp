/*
	THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY
	APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT
	HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY
	OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,
	THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
	PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM
	IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF
	ALL NECESSARY SERVICING, REPAIR OR CORRECTION.
	
	ArduinoBT_myRobot.cpp
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

#include <ArduinoBTmyRobot.h>
#include "Arduino.h"



int LeftWheel[] = {13 , 13};
int RightWheel[] = {13 , 13};
int Equipment[] = {13, 13, 13, 13};


void ArduinoBTmyRobotClass::confBluetooth() {
	Serial.begin(9600);
}

/**
   Event - Listenner
*/
char ArduinoBTmyRobotClass::bluetoothEventListenner(void) {
  char c;
  while (Serial.available())
    c = Serial.read();
  return c;
}

void ArduinoBTmyRobotClass::leftWheel(int A_pin, int B_pin) {
	//#def motor pin
	LeftWheel[0] = A_pin;
	LeftWheel[1] = B_pin;
	//#def pin as output
	pinMode(LeftWheel[0], OUTPUT);
    pinMode(LeftWheel[1], OUTPUT);
    //#set pin output as LOW
    digitalWrite(LeftWheel[0], !LOW);
    digitalWrite(LeftWheel[1], !LOW);
}

void ArduinoBTmyRobotClass::rightWheel(int A_pin, int B_pin) {
	//#def motor pin
	RightWheel[0] = A_pin;
	RightWheel[1] = B_pin;
	//#def pin as output
	pinMode(RightWheel[0], OUTPUT);
    pinMode(RightWheel[1], OUTPUT);
    //#set pin output as LOW
    digitalWrite(RightWheel[0], !LOW);
    digitalWrite(RightWheel[1], !LOW);
}

void ArduinoBTmyRobotClass::comp1(int A_pin) {
	//#def motor pin
	Equipment[0] = A_pin;
	//#def pin as output
	pinMode(Equipment[0], OUTPUT);
    //#set pin output as LOW
    digitalWrite(Equipment[0], !LOW);
}

void ArduinoBTmyRobotClass::comp2(int A_pin) {
	//#def motor pin
	Equipment[1] = A_pin;
	//#def pin as output
	pinMode(Equipment[1], OUTPUT);
    //#set pin output as LOW
    digitalWrite(Equipment[1], !LOW);
}

void ArduinoBTmyRobotClass::comp3(int A_pin) {
	//#def motor pin
	Equipment[2] = A_pin;
	//#def pin as output
	pinMode(Equipment[2], OUTPUT);
    //#set pin output as LOW
    digitalWrite(Equipment[2], !LOW);
}

void ArduinoBTmyRobotClass::comp4(int A_pin) {
	//#def motor pin
	Equipment[3] = A_pin;
	//#def pin as output
	pinMode(Equipment[3], OUTPUT);
    //#set pin output as LOW
    digitalWrite(Equipment[3], !LOW);
}

void ArduinoBTmyRobotClass::moveWheels(int L_Wheel, int R_Wheel) {
	digitalWrite(RightWheel[R_Wheel], !HIGH);
	digitalWrite(LeftWheel[L_Wheel] , !HIGH);
}

void ArduinoBTmyRobotClass::stopWheels() {
	digitalWrite(RightWheel[1], !LOW);
	digitalWrite(LeftWheel[1] , !LOW);
	digitalWrite(RightWheel[0], !LOW);
	digitalWrite(LeftWheel[0] , !LOW);
}

void ArduinoBTmyRobotClass::implement(int id, bool state) {
	//#set IMPLEMENT
		digitalWrite(Equipment[id - 1], !state);

}





//extern C Obj
		ArduinoBTmyRobotClass myRobot;
