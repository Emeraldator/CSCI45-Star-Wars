#include "motor.h"
#include "ultrasound_buzzer.h"

int main(void) { 
    int i;
     int tmp=0;
    int status = 0;
    float dis; // ES: ultrasonic thing
      pcf8591Setup (PCF, 0x48);
    if(wiringPiSetup() == -1){ //when initialize wiring failed, print messageto screen
        printf("setup wiringPi failed !\n");
        return 1;
    }
    pinMode(MotorPin1, OUTPUT);
    pinMode(MotorPin2, OUTPUT);
    pinMode(MotorEnable, OUTPUT);
    pinMode(MotorPin3, OUTPUT);
    pinMode(MotorPin4, OUTPUT);
    pinMode(MotorEnableB, OUTPUT); 

    ultraInit();
    printf("Ultrasonic Sensor Ready!\n");
    while(1) {
		// ES: This is for motor
		tmp = direction();

		// ES: The rest of this is for ultrasonic
        dis = disMeasure();
        if (dis == -1) {
            continue;  // Skip the rest if error
        }

        printf("Distance: %.2f cm\n", dis);

        if (dis <= 10.0) {
            printf("Object detected! Activating buzzer.\n");
            digitalWrite(BuzzerPin, LOW);
        } else {
            digitalWrite(BuzzerPin, HIGH);
        }
    }
}
