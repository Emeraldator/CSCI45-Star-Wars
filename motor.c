#include "motor.h"

int direction(){
    int x, y, b;
    int tmp=0;
    x = analogRead(AIN1);
    y = analogRead(AIN0);
    b = analogRead(AIN2);
    if (y <= 30){
        //tmp = 1;
	printf("Fowards\n");
        digitalWrite(MotorEnable, HIGH);
        digitalWrite(MotorPin1, HIGH);
        digitalWrite(MotorPin2, LOW);
        digitalWrite(MotorEnableB, HIGH);
        digitalWrite(MotorPin3, HIGH);
        digitalWrite(MotorPin4, LOW);                   // up
        tmp = 1;
	}
	if (y >= 225){
	printf("Backwards\n");
        tmp = 2;            // down
        digitalWrite(MotorEnable, HIGH);
        digitalWrite(MotorPin1, LOW);
        digitalWrite(MotorPin2, HIGH);
        digitalWrite(MotorEnableB, HIGH);
        digitalWrite(MotorPin3, LOW);
        digitalWrite(MotorPin4, HIGH);
	}
  //  if (x >= 225)
    //    tmp = 3;            // left
  //  if (x <= 30)
    //    tmp = 4;            // right

   // if (b <= 30)
     //   tmp = 5;            // button preesd
     if (x-125<15 && x-125>-15 && y-125<15 && y-125>-15 && b >= 60){
	printf("Stop\n");
	 tmp = 0;            // home position
        digitalWrite(MotorEnable, LOW);
        digitalWrite(MotorEnableB, LOW);
     }
    return tmp;
}

