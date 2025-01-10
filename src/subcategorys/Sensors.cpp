#include "Sensors.h"

//Abfrage des Potentiometer-Werts
int potentiometer(){
    return analogRead(AIO_POTENTIOMETER);
}

//Abfrage des Fotregistor-Werts
int photoregistor(){
    return analogRead(AIO_PHOTOREGISTOR);
}

//Abfrage des Temperatur-Werts
int temperature(){
    return analogRead(AIO_TEMPERATURE);
}

//Definition des "Konstruktors" der Sensor Subkategorie
Sensors createSensors(void) {
    Sensors sensors;

    //Zuweisen der definierten Methode, zur vorgegebenen Methode
    sensors.potentiometer = potentiometer;
    sensors.photoregistor = photoregistor;
    sensors.temperature = temperature;
    return sensors;
}
