#ifndef Buzzer_H
#define Buzzer_H

#include "private/BBWASinit.h"

typedef struct {
    /**
     * 
     * Ermöglicht es, einen Ton mit einer bestimmten Frequenz für eine bestimmte Zeit auf dem Buzzer abzuspielen
     * 
     * @param frequenz Die Frequenz, des Buzzer-Tons
     * @param laenge Die Länge, für die der Ton zuhören sein soll
     */
    void (*toneBuzzer)(unsigned int frequenz, unsigned int laenge);
} Buzzer;

//Initialisierung des "Konstruktors" der buzzer Subkategorie
Buzzer createBuzzer(void);

#endif // Buzzer_H
