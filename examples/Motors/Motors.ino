// include library
#include <BBWAS.h>

// create shield variable
Shield shield = Shield();

/**
	Define Motors Sub-Category
	(not necessary, but may enhance readibility of the code)
*/
Motors motors;

void setup(){
	// initialize the shield
	shield.initShield();

	// assign the Motors Sub-Category of the shield to the motors variable
	motors = shield.motors;
}

void loop(){
	// use the motors on the BBWAS
	
	shield.motors.writeServo(SERVO_1, 180);
	shield.motors.writeServo(SERVO_2, 90);

	delay(5000);

	motors.writeServo(SERVO_1, 0);
	motors.writeServo(SERVO_2, 0);

	delay(5000);

	shield.motors.writeMotor(MOTOR_LEFT, 255);
	
	delay(1000);

	motors.writeMotor(MOTOR_RIGHT, 255);

	delay(1000);

	motors.writeMotor(MOTOR_LEFT, 0);

	delay(1000);
}