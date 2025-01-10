#include <BBWAS.h>

Shield shield = Shield();

Motors motoren;

void setup(){
  shield.initShield();

  motoren = shield.motors;
}

void loop(){
  shield.motors.writeServo(SERVO_1, 180);
  shield.motors.writeServo(SERVO_2, 90);

  delay(5000);

  motoren.writeServo(SERVO_1, 0);
  motoren.writeServo(SERVO_2, 0);

  delay(5000);

  shield.motors.writeMotor(MOTOR_LEFT, 255);
  
  delay(1000);

  motoren.writeMotor(MOTOR_RIGHT, 255);

  delay(1000);

  motoren.writeMotor(MOTOR_LEFT, 0);

  delay(1000);
}