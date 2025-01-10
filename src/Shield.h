#ifndef Shield_H
#define Shield_H

//Inkludierung der einzelnen Subkategrieen
#include "subcategorys/Buttons.h"
#include "subcategorys/LEDs.h"
#include "subcategorys/Sensors.h"
#include "subcategorys/Buzzer.h"
#include "subcategorys/Motors.h"

/**
 * 
 * Erstellen des Shield-Datentyps
 * 
 * shield.initShield(); nicht vergessen!!
 * 
 */
class Shield {
private:
    bool isInitialized;  //Variabel, zum verfolgen der initialisation

public:
    //Konstruktor des Shields
    Shield();

    /**
     * initialisierungs-Methode des Shields
     * Muss im Setup aufgerufen werden, nach Serial.begin(),
     * um einwandsfrei zu funktionieren
    */
    void initShield();

    //Erlaubt zugriff auf alle Funktionen der Knöpfe
    Buttons buttons;

    //Erlaubt zugriff auf alle Funktionen der LEDs
    LEDs leds;

    //Erlaubt zugriff auf alle Funktionen der Sensoren
    Sensors sensors;

    //Erlaubt zugriff auf alle Funktionen der Adafruit matrix
    Adafruit_8x8matrix matrix;

    //Erlaubt zugriff auf alle Funktionen des Buzzers
    Buzzer buzzer;

    //Erlaubt zugriff auf alle Funktionen der Motoren und Servos
    Motors motors;

    /**
     * Erlaubt zugriff auf alle Funktionen des IR-Empfängers
     * 
     * IRremote-Objekt muss als Pointer übergeben werden, nicht anders möglich...
    */
    IRrecv* irreceiver;

    /**
     * Erlaubt zugriff auf alle Funktionen des IR-Senders
     * 
     * IRremote-Objekt muss als Pointer übergeben werden, nicht anders möglich...
    */
    IRsend* irsender;
};

#endif // Shield_H