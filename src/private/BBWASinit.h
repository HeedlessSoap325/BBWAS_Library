#ifndef BBWASinit_h
#define BBWASinit_h

//Alle benötigten Bibliotheken inkludieren
#include <Arduino.h>
#include <IRremote.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>
#include <Servo.h>

//Booleans Bibliotek inkludieren
#include <stdbool.h>

//Pin-Belegung des Boards inkludieren
#include "BBWASBelegung.cpp"

//definieren der Methoden, die in BBWASinit.cpp implementiert werden sollen
void initBBWAS(void);

IRsend getIRSend(void);

IRrecv getIRRecv(void);

Adafruit_8x8matrix getMatrix(void);

Servo getServo1(void);

Servo getServo2(void);

#endif