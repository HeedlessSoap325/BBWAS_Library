//definition der digitalen Pins des BBWAS Boards
const int IO_RX = 0;
const int IO_TX = 1;
const int IO_IR_REC = 2;
const int IO_IR_SEND = 3;
const int IO_BUTTON_UP = 4;
const int IO_BUZZER = 5;
const int IO_LED_RGB_GREEN = 6;
const int IO_BUTTON_DOWN = 7;
const int IO_LED_GREEN = 8;
const int IO_LED_RGB_RED = 9;
const int IO_SERVO1 = 9;
const int IO_SERVO2 = 10;
const int IO_LED_RGB_BLUE = 10;
const int IO_LED_CENTER = 11;
const int IO_LED_YELLOW = 12;
const int IO_LED_RED = 13;

//definition der analogen Pins des BBWAS Boards
const int AIO_POTENTIOMETER =   0;
const int AIO_PHOTOREGISTOR = 1;
const int AIO_TEMPERATURE = 2;
const int AIO_BUTTON_MATRIX = 3;
const int AIO_SCL = 4;
const int AIO_SDA = 5;

//definition def analogen Werte, die zeigen, wann welche Buttons gedrückt wurden
const int BUTTON_LEFT_PRESSED = 400;
const int BUTTON_RIGHT_PRESSED = 600;
const int BUTTON_LEFT_AND_RIGHT_PRESSED = 700;

//definition der benötigten Variabeln um die Linken LEDS anzusteuern
const int ADRHT16K33 = 0x70;
const int HTK33_NO_LED = 0x00;
const int HTK33_LED_GREEN = 0x01;
const int HTK33_LED_YELLOW = 0x02;
const int HTK33_LED_RED = 0x04;