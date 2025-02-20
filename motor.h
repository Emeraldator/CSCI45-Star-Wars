#pragma once

#include <wiringPi.h>
#include <stdio.h>
#include <pcf8591.h>

#define PCF       120
#define uchar       unsigned char

#define MotorPin1       0
#define MotorPin2       2
#define MotorEnable     3
#define MotorPin3       27
#define MotorPin4       28
#define MotorEnableB     29

int direction();
