#include "Shield.h"
#include "private/BBWASinit.h"

//Konstruktor des Shields
Shield::Shield() : isInitialized(false) {}

//Initialisierungs Methode
void Shield::initShield() {
    //Prüfen, ob das Shield bereits initialisiert wurde
    if (isInitialized){
        Serial.println("Das Shield wurde bereits initialisiert");
    }
    
    //aufruf der init Funktion, alles Nötige aufsetzen
    initBBWAS();
    
    //Zuweisen der Subkategorien-Konstruktore zu den Subkategorien
    Shield::buttons = createButtons();
    Shield::leds = createLEDs();
    Shield::sensors = createSensors();
    Shield::matrix = getMatrix();
    Shield::buzzer = createBuzzer();
    Shield::motors = createMotors();
    Shield::irreceiver = &getIRRecv();
    Shield::irsender = &getIRSend();

    isInitialized = true;
}
