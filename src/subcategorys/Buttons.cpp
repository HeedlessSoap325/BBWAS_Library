#include "Buttons.h"

//Abfrage, ob der obere Knopf gedrückt wurde
bool UpPressed() {
    return digitalRead(IO_BUTTON_UP) == 1;
}

//Abfrage, ob der untere Knopf gedrückt wurde
bool DownPressed(){
    return digitalRead(IO_BUTTON_DOWN) == 1;
}

//Abfrage, ob der rechte Knopf gedrückt wurde
bool RightPressed(){
    int bm = analogRead(AIO_BUTTON_MATRIX);
    return bm > BUTTON_RIGHT_PRESSED && bm < BUTTON_LEFT_AND_RIGHT_PRESSED;
}

//Abfrage, ob der linke Knopf gedrückt wurde
bool LeftPressed(){
    int bm = analogRead(AIO_BUTTON_MATRIX);
    return bm > BUTTON_LEFT_PRESSED && bm < BUTTON_RIGHT_PRESSED;
}

//Abfrage, ob der Linke und rechte Knopf gedrückt wurde
bool LeftAndRightPressed(){
    int bm = analogRead(AIO_BUTTON_MATRIX);
    return bm > BUTTON_LEFT_AND_RIGHT_PRESSED;
}

//Abfrage, welcher Knopf gedrückt wurde
Button getButtonPressed(){
    if(UpPressed()){
        return BUTTON_UP;
    }else if(DownPressed()){
        return BUTTON_DOWN;
    }else if(LeftPressed()){
        return BUTTON_LEFT;
    }else if(RightPressed()){
        return BUTTON_RIGHT;
    }else if(LeftAndRightPressed()){
        return BUTTON_LEFTANDRIGHT;
    }else{
        return NONE;
    }
}

//Definition des "Konstruktors" der knopf Subkategorie
Buttons createButtons(void) {
    Buttons buttons;
    
    //Zuweisen der definierten Methode, zur vorgegebenen Methode
    buttons.UpPressed = UpPressed;
    buttons.DownPressed = DownPressed;
    buttons.RightPressed = RightPressed;
    buttons.LeftPressed = LeftPressed;
    buttons.LeftAndRightPressed = LeftAndRightPressed;
    buttons.getButtonPressed = getButtonPressed;
    return buttons;
}
