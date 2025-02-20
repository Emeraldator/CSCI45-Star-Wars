a.out: motor.o ultrasound_buzzer.o main.o
	gcc main.o ultrasound_buzzer.o motor.o

main.o: main.c
	gcc -c main.c

ultrasound_buzzer.o: ultrasound_buzzer.c
	gcc -c ultrasound_buzzer.c

motor.o: motor.c
	gcc -c motor.c

clean:
	rm -f a.out core *o
