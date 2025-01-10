#ifndef LEDs_H
#define LEDs_H

#include "private/BBWASinit.h"

/**
 * Liste aller LEDs
 */
typedef enum {
    RIGHT_RED,
    RIGHT_YELLOW,
    RIGHT_GREEN,
    CENTER,
    LEFT_RED,
    LEFT_YELLOW,
    LEFT_GREEN,
} LED;

typedef struct {
    /**
     * 
     * Erlaubt es, die LEDs auf dem Board anzusteuern
     * 
     * @param led Die LED, die angesteuert werden soll
     * @param state Der Zustand, auf den die LED gestellt werden soll 0->aus, 1->an
     */
    void (*toggleLED)(LED led, int state);

    /**
     * 
     * Ermöglicht es, die RGB LED auf jeden möglichen rgb wert zu setzen
     * 
     * @param r Der Rot-Wert, auf den die RGB LED gesetzt werden soll 0->aus, 255->hellstes Rot
     * @param g Der Grün-Wert, auf den die RGB LED gesetzt werden soll 0->aus, 255->hellstes Grün
     * @param b Der Blau-Wert, auf den die RGB LED gesetzt werden soll 0->aus, 255->hellstes Blau
     */
    void (*setRGBLED)(int r, int g, int b);
} LEDs;

//Initialisierung des "Konstruktors" der LED Subkategorie
LEDs createLEDs(void);

#endif // LEDs_H
