#pragma once

#include <wiringPi.h>
#include <stdio.h>
#include <pcf8591.h>

#define PCF       120
#define uchar       unsigned char

int AIN0 = PCF + 0;
int AIN1 = PCF + 1;
int AIN2 = PCF + 2;

char *state[7] = {"home", "up", "down", "left", "right", "pressed"};

#define MotorPin1       0
#define MotorPin2       2
#define MotorEnable     3
#define MotorPin3       27
#define MotorPin4       28
#define MotorEnableB     29

int direction();
