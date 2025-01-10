//Inkludieren der Bibliothek
#include <BBWAS.h>

//Definieren der Shield Variabel, hier wird sie "shield" genannt
Shield shield = Shield();

/**
  Definition einer LEDs subkategorie
  Das ist nicht nötig, kann den Code aber lesbarer machen
*/
LEDs leds;

void setup(){
  //Aufsetzen der Seriellen Kommunikation, und Ausgabe einer ersten Nachricht
  Serial.begin(115200);
  Serial.println("Knöpfe des BBWAS benutzen");

  /**
    Initialisieren des Shields
    Ohne diesen Schritt funktioniert das ganze Programm nicht
  */
  shield.initShield();

  /**
    Zuweisen der shield LEDs Kategorie zu der leds Variabel 
    Nur nötig, wenn auch eine LEDs-Variabel erstellt wurde
  */
  leds = shield.leds;
}

void loop(){
  //Anschalten der linken Roten und Grünen LED, der Center LED und der rechten Gelben LED
  shield.leds.toggleLED(LEFT_RED, HIGH);
  shield.leds.toggleLED(LEFT_GREEN, HIGH);
  shield.leds.toggleLED(CENTER, HIGH);
  shield.leds.toggleLED(RIGHT_YELLOW, HIGH);

  delay(5000);//Warten für 5 Sekunden

  //Ausschalten aller LEDs, die vorher eingeschalten wurden
  leds.toggleLED(LEFT_RED, LOW);
  leds.toggleLED(LEFT_GREEN, LOW);
  leds.toggleLED(CENTER, LOW);
  leds.toggleLED(RIGHT_YELLOW, LOW);

  delay(1000);//Warten für 1 sekunde

  leds.setRGBLED(255, 0, 0);//RGB LED auf Rot setzen

  delay(1000);//Warten für 1 Sekunde

  leds.setRGBLED(0, 255, 0);//RGB LED auf Grün setzen

  delay(1000);//Warten für 1 Sekunde

  leds.setRGBLED(0, 0, 255);//RGB LED auf Blau setzen

  delay(1000);//Warten für 1 Sekunde

  leds.setRGBLED(255, 255, 255);//RGB LED auf Weiss setzen

  delay(1000);//Warten für 1 Sekunde

  shield.leds.setRGBLED(0, 0, 0);//Ausschalten der RGB LED
}