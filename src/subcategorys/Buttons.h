#ifndef Buttons_H
#define Buttons_H

#include "private/BBWASinit.h"

/**
 * Liste aller Knöpfe
 */
typedef enum {
    BUTTON_LEFT,
    BUTTON_RIGHT,
    BUTTON_UP,
    BUTTON_DOWN,
    BUTTON_LEFTANDRIGHT,
    NONE,
} Button;

typedef struct {
    //Abfrage, ob der Knopf oben gedrückt wurde
    bool (*UpPressed)(void);

    //Abfrage, ob der Knopf unten gedrückt wurde
    bool (*DownPressed)(void);

    //Abfrage, ob der Knopf links gedrückt wurde
    bool (*LeftPressed)(void);

    //Abfrage, ob der Knopf rechts gedrückt wurde
    bool (*RightPressed)(void);

    //Abfrage, ob die Knöpfe Links und rechts zusammen gedrückt wurden
    bool (*LeftAndRightPressed)(void);

    //Abfrage, welcher Knopf gedrückt wurde, fallls ein Knopf gedrückt wurde
    Button (*getButtonPressed)(void);
} Buttons;

//Initialisierung des "Konstruktors" der Knopf Subkategorie
Buttons createButtons(void);

#endif // Buttons_H
