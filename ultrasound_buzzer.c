#include "ultrasound_buzzer.h"

void ultraInit(void)
{
    pinMode(Echo, INPUT);
    pinMode(Trig, OUTPUT);
    pinMode(BuzzerPin, OUTPUT);
}

float disMeasure(void)
{
    struct timeval tv1, tv2;
    long time1, time2;
    float dis;

    digitalWrite(Trig, LOW);
    delayMicroseconds(2);
    digitalWrite(Trig, HIGH);
    delayMicroseconds(15);  // Increased delay
    digitalWrite(Trig, LOW);

    printf("Waiting for echo...\n");

    int timeout = 500000;  // 500ms timeout
    while (!(digitalRead(Echo) == 1) && timeout--);
    if (timeout <= 0) {
        printf("Echo signal not received!\n");
        return -1;
    }
    gettimeofday(&tv1, NULL);

    timeout = 500000;
    while (!(digitalRead(Echo) == 0) && timeout--);
    if (timeout <= 0) {
        printf("Echo signal stuck high!\n");
        return -1;
    }
    gettimeofday(&tv2, NULL);

    time1 = tv1.tv_sec * 1000000 + tv1.tv_usec;
    time2 = tv2.tv_sec * 1000000 + tv2.tv_usec;

    dis = (float)(time2 - time1) / 1000000 * 34000 / 2;

    return dis;
}
