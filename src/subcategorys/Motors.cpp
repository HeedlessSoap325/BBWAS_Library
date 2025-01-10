#include "Motors.h"

//Implementierung, um die Servos ansteuern zu können
void writeServo(Servo_selection servo, int angle){
    if (servo == SERVO_1){
        Servo servo1 = getServo1();
        servo1.attach(IO_SERVO1);

        servo1.write(angle);

        servo1.detach();
    }else if(servo = SERVO_2){
        Servo servo2 = getServo2();
        servo2.attach(IO_SERVO1);

        servo2.write(angle);

        servo2.detach();
    }else{
        return;
    }
}

//Implementierung, um den Motor ansteuern zu können.
void writeMotor(Direction direction, int speed){
    if (speed < 0 || speed > 255){
        return;
    }

    if (direction == MOTOR_LEFT){
        analogWrite(IO_SERVO1, speed);
        analogWrite(IO_SERVO2, 0);
    }else if(direction == MOTOR_RIGHT){
        analogWrite(IO_SERVO2, speed);
        analogWrite(IO_SERVO1, 0);
    }else{
        return;
    }
}

//Motors subkategorie erstellen und befehle den Befehlsdefinitionen zuordnen
Motors createMotors(){
    Motors motors;
    motors.writeServo = writeServo;
    motors.writeMotor = writeMotor;
    return motors;
}