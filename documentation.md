# Documentation
### Written by Celeste Hernandez

Our project works, by having an ultrasound sensor attached to the front of the build that is
sending out sound waves and calculating how long they take to get back to the sensor to figure
out how far away an object is. Connected to the ultrasound sensor is an active buzzer that
activates when it is connected to electricity or makes a complete circuit. The two components are
connected together in code that has the ultrasound send a signal to the buzzer when an object is
10cm away. The two components are wired to the Raspberry Pi through port 18 for the
ultrasound trig and port 23 for the echo of the ultrasound. The buzzer is connected to port 12.
The components are then connected digitally to the ports of wiringPi in the code to ensure that
the code works correctly.
The build is then put into a box that is attached to two TT motors that are holding the box
up with four skewers two on each side and one pair inside the box and a pair outside of the box.
The motors are connected to the Pi by an L293D device that helps put control on the motors. The
motors are controlled by a joystick that is connected to a PCF8591 that turns the joystick's
analog input into digital input for the Pi to understand. To start the joystick analog inputs are put
into an open space on the bread where the PCF8591 analog input can then be attached to by
being connected to the holes in front of the joystick inputs, from there the PCF8591 is then
connected to the ports SDA and SCL on the Pi. From there after establishing that both motors
work on their own just from power they were then connected to the L293D which has four input
pins and four output pins, the two motors were connected to the output pins according to where
each motor was wanted. The four input pins were connected to the Pi in ports 17,27,16 and 20.
Once those were connected two pins from the L293D were used to enable which gives power to
the motors telling them to drive, they were connected to ports 22 and 21. Sample code from
Sunfounder was then used to ensure that the motors would work with input from the PI. After
they were seen to be working sample code for the joystick was taken and was reconfigured with
the sample code from the motors to make the joystick work with the motors. All ports were then
connected to wiringPi ports in the code to ensure the code would work.
Once the two main components were working they were put into a make file and one
while loop that was able to get both components to work together with no separation.
The final component of the build was making a small puzzle of buttons that activated
different lights and making sure they worked without triggering the other components of the
build. The lights are set up in simple circuits with a button that interrupts the circuit and will
reconnect it if it is pressed continuously. The button has four pins with a pain that goes across
from each other, those pins that are straight across from each other make a circuit by themselves
so the adjacent pin from the one that is taking the power or is going to ground was used to make
a complete circuit when the button was pressed.
After all, the components were fully finished the build was put back into the box with the
lower breadboard that holds the Pi, and the motors were enclosed, the breadboard with the button
puzzle was then placed on top with the puzzle being enclosed on four sides with an opening on
top to still get access to the buttons. It was then painted to look like it belonged in Star Wars and
was fully complete.

