// include library
#include <BBWAS.h>

// create shield variable
Shield shield = Shield();

/**
  Define Buttons Sub-Category
  (not necessary, but may enhance readibility of the code)
*/
Buttons btns;

void setup(){
	// initialize the serial communication
	Serial.begin(115200);
	Serial.println("Use buttons on BBWAS");

	// initialize the shield
	shield.initShield();

	// assign the Buttons Sub-Category of the shield to the btns variable
	btns = shield.buttons;
}

void loop(){
	// use the shields buttons to write text to the serial output

	if (shield.buttons.DownPressed()) {
	  	Serial.println("Unterer Knopf wurde gedrückt");
	} else if (shield.buttons.getButtonPressed() == BUTTON_LEFT) {
	  	Serial.println("Linker Knopf wurde gedrückt");
	} else if (btns.UpPressed()) {
	  	Serial.println("Oberer Knopf wurde gedrückt");
	} else if (btns.getButtonPressed() == BUTTON_RIGHT) {
	  	Serial.println("Rechter Knopf wurde gedrückt");
	}

  	delay(100); // just a small delay
}