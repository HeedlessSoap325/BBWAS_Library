#include "LEDs.h"

//Hilfsfunktion, um die Linken LEDs anzusteuern
void lightHT16K33LED(int led){
    Wire.beginTransmission(ADRHT16K33);
    Wire.write(0x1);
    Wire.write(led);
    Wire.endTransmission();
}

//Variabeln zum
int LEFT_RED_STATE = 0;
int LEFT_YELLOW_STATE = 0;
int LEFT_GREEN_STATE = 0;

//ansteuern der ausgewählten LED
void toggleLED(LED led, int state){
    if (state != 0 && state != 1){
        return;
    }
    
    switch (led){
    case RIGHT_RED:
        digitalWrite(IO_LED_RED, state);
        break;
    case RIGHT_YELLOW:
        digitalWrite(IO_LED_YELLOW, state);
        break;
    case RIGHT_GREEN:
        digitalWrite(IO_LED_GREEN, state);
        break;
    case CENTER:
        digitalWrite(IO_LED_CENTER, state);
        break;
    case LEFT_RED:
        if (state == 0){
            LEFT_RED_STATE = HTK33_NO_LED;
            lightHT16K33LED(LEFT_RED_STATE | LEFT_YELLOW_STATE | LEFT_GREEN_STATE);
            break;
        }
        LEFT_RED_STATE = HTK33_LED_RED;
        lightHT16K33LED(LEFT_RED_STATE | LEFT_YELLOW_STATE | LEFT_GREEN_STATE);
        break;
    case LEFT_YELLOW:
        if (state == 0){
            LEFT_YELLOW_STATE = HTK33_NO_LED;
            lightHT16K33LED(LEFT_RED_STATE | LEFT_YELLOW_STATE | LEFT_GREEN_STATE);
            break;
        }
        LEFT_YELLOW_STATE = HTK33_LED_YELLOW;
        lightHT16K33LED(LEFT_RED_STATE | LEFT_YELLOW_STATE | LEFT_GREEN_STATE);
        break;
    case LEFT_GREEN:
        if (state == 0){
            LEFT_GREEN_STATE = HTK33_NO_LED;
            lightHT16K33LED(LEFT_RED_STATE | LEFT_YELLOW_STATE | LEFT_GREEN_STATE);
            break;
        }
        LEFT_GREEN_STATE = HTK33_LED_GREEN;
        lightHT16K33LED(LEFT_RED_STATE | LEFT_YELLOW_STATE | LEFT_GREEN_STATE);
        break;
    }
}

//Ansteuern der RGB LED
void setRGBLED(int r, int g, int b){
    analogWrite(IO_LED_RGB_RED, r);
    analogWrite(IO_LED_RGB_GREEN, g);
    analogWrite(IO_LED_RGB_BLUE, b);
}

//Definition des "Konstruktors" der LED Subkategorie
LEDs createLEDs(void) {
    LEDs leds;

    //Zuweisen der definierten Methode, zur vorgegebenen Methode
    leds.toggleLED = toggleLED;
    leds.setRGBLED = setRGBLED;
    return leds;
}