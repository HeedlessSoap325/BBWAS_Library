// include library
#include <BBWAS.h>

// create shield variable
Shield shield = Shield();

/**
  Define Sensors Sub-Category
  (not necessary, but may enhance readibility of the code)
*/
Sensors sensors;

void setup(){
  // initialize the serial communication
  Serial.begin(115200);
  Serial.println("use sensors on BBWAS");

  // initialize the shield
  shield.initShield();

  // assign the Sensors Sub-Category of the shield to the sensors variable
  sensors = shield.sensors;
}

void loop(){
  // get sensor data

  Serial.println("Potentiometer: " + String(sensors.potentiometer()));
  Serial.println("Photoregistor: " + String(shield.sensors.photoregistor()));
  Serial.println("Temperature:   " + String(sensors.temperature()));

  delay(100); // small delay
}