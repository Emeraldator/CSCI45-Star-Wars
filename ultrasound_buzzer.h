#pragma once

#include <wiringPi.h>
#include <stdio.h>
#include <sys/time.h>

#define BuzzerPin  0
#define Trig       1
#define Echo       2

void ultraInit(void);

float disMeasure(void);
