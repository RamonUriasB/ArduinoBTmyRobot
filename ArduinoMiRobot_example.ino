/*
   ArduinoMiRobot_example.ino - this is an example code to use the "ArduinoBT_miRobot"
   Available on Play Store only for Android Users. Need ArduinoBT_myRobot Library
*/

#include <ArduinoBTmyRobot.h>

char listennerBTEvent;


void setup()
{
  myRobot.confBluetooth(); //default to pin 0, 1
  myRobot.leftWheel(2 , 3);
  myRobot.rightWheel(4 , 5);
  myRobot.comp1(6);
  myRobot.comp2(7);
  //myRobot.comp3(8);
  //myRobot.comp4(9);
}

void loop()
{
  listennerBTEvent = myRobot.bluetoothEventListenner();
  acctionEvent(listennerBTEvent);
}

void acctionEvent(char newBluetoothEvent)
{
  switch (newBluetoothEvent)
  {
    //adelante
    case AHEAD:
      myRobot.moveWheels(CW , CW);
      break;

    //atras
    case BACKWARD:
      myRobot.moveWheels(CCW , CCW);
      break;

    //derecha
    case RIGHT:
      myRobot.moveWheels(CW , CCW);
      break;

    //izquierda
    case LEFT:
      myRobot.moveWheels(CCW , CW);
      break;

    //activa implemento
    case C_PRESSED:
      myRobot.implement(1, ON);
      myRobot.implement(2, OFF);
      //myRobot.implement(3, ON);
      //myRobot.implement(4, ON);
      break;

    //desactiva implemento
    case C_RELEASED:
      myRobot.implement(1, OFF);
      myRobot.implement(2, ON);
      //myRobot.implement(3, OFF);
      //myRobot.implement(4, OFF);
      break;

    default:
      myRobot.stopWheels();
      break;
  }
}
