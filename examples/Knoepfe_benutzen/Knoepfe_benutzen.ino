//Inkludieren der Bibliothek
#include <BBWAS.h>

//Definieren der Shield Variabel, hier wird sie "shield" genannt
Shield shield = Shield();

/**
  Definition einer Button subkategorie
  Das ist nicht nötig, kann den Code aber lesbarer machen
*/
Buttons btns;

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
    Zuweisen der shield Button Kategorie zu der btns Variabel 
    Nur nötig, wenn auch eine Button-Variabel erstellt wurde
  */
  btns = shield.buttons;
}

void loop(){
  if(shield.buttons.DownPressed()){//Abfrage, ob der Untere Knopf gedrückt wurde, über die shield Variabel
    Serial.println("Unterer Knopf wurde gedrückt");//Ausgabe auf der Konsole
    delay(100);//Pause, um nicht zu viele abfragen durchzuführen

  }else if(shield.buttons.getButtonPressed() == BUTTON_LEFT){//Abfrage welcher Knopf gedrückt wurde, und dann vergleichen, über die shield Variable
    Serial.println("Linker Knopf wurde gedrückt");//Ausgabe auf der Konsole
    delay(100);//Pause, um nicht zu viele abfragen durchzuführen

  }else if(btns.UpPressed()){//Abfrage, ob der Untere Knopf gedrückt wurde, über die btns Variabel
    Serial.println("Oberer Knopf wurde gedrückt");//Ausgabe auf der Konsole
    delay(100);//Pause, um nicht zu viele abfragen durchzuführen

  }else if(btns.getButtonPressed() == BUTTON_RIGHT){//Abfrage welcher Knopf gedrückt wurde, und dann vergleichen, über die btns Variable
    Serial.println("Rechter Knopf wurde gedrückt");//Ausgabe auf der Konsole
    delay(100);//Pause, um nicht zu viele abfragen durchzuführen

  }else{
    delay(100);//Pause, um nicht zu viele abfragen durchzuführen
  }
}