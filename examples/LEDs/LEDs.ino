// include library
#include <BBWAS.h>

// create shield variable
Shield shield = Shield();

/**
	Define LEDs Sub-Category
	(not necessary, but may enhance readibility of the code)
*/
LEDs leds;

void setup(){
	// initialize the serial communication
	Serial.begin(115200);
	Serial.println("Use leds on BBWAS");

	// initialize the shield
	shield.initShield();

	// assign the LEDs Sub-Category of the shield to the leds variable
	leds = shield.leds;
}

void loop(){
	// test the functionality of the leds

	shield.leds.toggleLED(LEFT_RED, HIGH);
	shield.leds.toggleLED(LEFT_GREEN, HIGH);
	shield.leds.toggleLED(CENTER, HIGH);
	shield.leds.toggleLED(RIGHT_YELLOW, HIGH);

	delay(5000);

	leds.toggleLED(LEFT_RED, LOW);
	leds.toggleLED(LEFT_GREEN, LOW);
	leds.toggleLED(CENTER, LOW);
	leds.toggleLED(RIGHT_YELLOW, LOW);

	delay(1000);
	leds.setRGBLED(255, 0, 0); // red

	delay(1000);
	leds.setRGBLED(0, 255, 0); // green

	delay(1000);
	leds.setRGBLED(0, 0, 255); // blue

	delay(1000);
	leds.setRGBLED(255, 255, 255); //white

	delay(1000);
	shield.leds.setRGBLED(0, 0, 0); // off
}