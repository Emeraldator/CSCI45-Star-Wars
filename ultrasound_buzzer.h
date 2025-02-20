#pragma once

#include <wiringPi.h>
#include <stdio.h>
#include <sys/time.h>

#define BuzzerPin  26
#define Trig       1
#define Echo       4

void ultraInit(void);

float disMeasure(void);
