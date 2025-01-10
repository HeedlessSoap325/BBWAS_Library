#ifndef Sensors_H
#define Sensors_H

#include "private/BBWASinit.h"

typedef struct {
    /**
     * Ermöglicht es, den Wert des Potentiometers abzufragen
     */
    int (*potentiometer)(void);

    /**
     * Ermöglicht es, den Wert des Fotoregistors abzufragen
     */
    int (*photoregistor)(void);

    /**
     * Ermöglicht es, den Wert des temperatur-Sensors abzufragen
     */
    int (*temperature)(void);
} Sensors;

//Initialisierung des "Konstruktors" der Sensor Subkategorie
Sensors createSensors(void);

#endif // Sensors_H
