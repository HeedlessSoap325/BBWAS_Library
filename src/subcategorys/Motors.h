#ifndef Motors_H
#define Motors_H

#include "private/BBWASinit.h"

//Definition der auswählbaren Servos
typedef enum{
    SERVO_1,
    SERVO_2,
} Servo_selection;

//Definition der auswählbaren Moror-Drehrichtungen
typedef enum{
    MOTOR_LEFT,
    MOTOR_RIGHT
} Direction;

typedef struct {
    /**
     * 
     * Ermöglicht das setzen des Winkels eines Servos.
     * 
     * @param servo Der Servo, der angesteuert werden soll.
     * @param winkel Der Winkel, an den der Servo gedreht werden soll.
     */
    void (*writeServo)(Servo_selection servo, int winkel);

    /**
     * 
     * Ermöglicht es, einen 5V Motor zu betreiben
     * 
     * @param richtung Die Richtung, in die sich der Motor drehen soll.
     * @param geschwindigkeit Die Geschwindigkeit, mit der sich der Motor drehen soll von 0 bis 255
     */
    void (*writeMotor)(Direction richtung, int geschwindigkeit);
} Motors;

// Function to initialize Motors subcategory
Motors createMotors(void);

#endif // Motors_H
