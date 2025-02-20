a.out: motor.o ultrasound_buzzer.o main.o
	gcc main.o ultrasound_buzzer.o motor.o -l wiringPi

main.o: main.c ultrasound_buzzer.h motor.h
	gcc -c main.c -l wiringPi

ultrasound_buzzer.o: ultrasound_buzzer.c ultrasound_buzzer.h
	gcc -c ultrasound_buzzer.c -l wiringPi

motor.o: motor.c motor.h
	gcc -c motor.c

clean:
	rm -f a.out core *o
