#include "Buzzer.h"

//Funktion, um einen Ton auf dem Buzzer abzuspielen
void toneBuzzer(int frequency, int duration){
    unsigned long period = 1000000L / frequency; // Länge eines Durchlaufs
    unsigned long halfPeriod = period / 2; //Hälfte des Durchlaus HOCh, die andere TIEF
    unsigned long startTime = millis(); //Startzeit der Tonlänge

    while (millis() - startTime < duration) { //Loop für die spezifische Länge
        digitalWrite(IO_BUZZER, HIGH); //Buzzer-Pin einschalten
        delayMicroseconds(halfPeriod); //Für die Hälfte des Durchgangs warten
        digitalWrite(IO_BUZZER, LOW); //Buzzer-pin ausschalten
        delayMicroseconds(halfPeriod); //Für die Hälfte des Durchgangs warten
    }
}

//Definition des "Konstruktors" der buzzer Subkategorie
Buzzer createBuzzer(void){
    Buzzer buzzer;
    
    //Zuweisen der definierten Methode, zur vorgegebenen Methode
    buzzer.toneBuzzer = toneBuzzer;
    return buzzer;
}
