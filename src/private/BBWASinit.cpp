#include "BBWASinit.h"

#include <../IRremote/src/private/IRremoteInt.h>

//Variabel für die LEDMatri erstellen
Adafruit_8x8matrix matrix = Adafruit_8x8matrix();

//Variabeln für das senden und Empfangen von Infrarotsignalen
IRsend irsend;
IRrecv irrecv(IO_IR_REC);

//Variabeln für die Servos
Servo servo1;
Servo servo2;


void initBBWAS(){
    //LED-Pins definieren
    pinMode(IO_LED_RED, OUTPUT);
    pinMode(IO_LED_YELLOW, OUTPUT);
    pinMode(IO_LED_GREEN, OUTPUT);
    pinMode(IO_LED_CENTER, OUTPUT);

    //RGB-LED-Pins definieren
    pinMode(IO_LED_RGB_RED, OUTPUT);
    pinMode(IO_LED_RGB_GREEN, OUTPUT);
    pinMode(IO_LED_RGB_BLUE, OUTPUT);

    //Buzzer-Pin definieren
    pinMode(IO_BUZZER, OUTPUT);

    //Button-Pins definieren
    pinMode(IO_BUTTON_DOWN, INPUT);
    pinMode(IO_BUTTON_UP, INPUT);

    //Servo-Pins definieren
    pinMode(IO_SERVO1, OUTPUT);
    pinMode(IO_SERVO2, OUTPUT);

    //Matrix und HTK33 initialisieren
    matrix.begin(0x70);

    //setzen des empfangpins für IRremote... das sollte eigentlich nicht nötig sein, ist aber als Sicherheit
    irparams.recvpin = IO_IR_REC;
}

/**
* 
* Definition von Methoden, um die einzelnen 
* 
*/

IRsend getIRSend(){
    return irsend;
}


IRrecv getIRRecv(){
    return irrecv;
}


Adafruit_8x8matrix getMatrix(){
    return matrix;
}

Servo getServo1(){
    return servo1;
}

Servo getServo2(){
    return servo2;
}