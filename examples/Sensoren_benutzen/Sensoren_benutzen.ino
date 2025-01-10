//Inkludieren der Bibliothek
#include <BBWAS.h>

//Definieren der Shield Variabel, hier wird sie "shield" genannt
Shield shield = Shield();

/**
  Definition einer Sensors subkategorie
  Das ist nicht nötig, kann den Code aber lesbarer machen
*/
Sensors sensoren;

void setup(){
  //Aufsetzen der Seriellen Kommunikation, und Ausgabe einer ersten Nachricht
  Serial.begin(115200);
  Serial.println("Sensoren des BBWAS benutzen");

  /**
    Initialisieren des Shields
    Ohne diesen Schritt funktioniert das ganze Programm nicht
  */
  shield.initShield();

  /**
    Zuweisen der shield Sensors Kategorie zu der sensoren Variabel 
    Nur nötig, wenn auch eine LEDs-Variabel erstellt wurde
  */
  sensoren = shield.sensors;
}

void loop(){
  //                                        Abfrage des Sensor-Werts
  Serial.println("Potentiometer: " + String(sensoren.potentiometer()));//Ausgabe auf dem Seriellen-Monitor
  Serial.println("Photoregistor: " + String(shield.sensors.photoregistor()));//Ausgabe auf dem Seriellen-Monitor
  Serial.println("Temperature: " + String(sensoren.temperature()));//Ausgabe auf dem Seriellen-Monitor

  delay(100);//Kleines Tomeout, um nicht zu viel auszugeben
}