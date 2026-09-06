#include "arduino.h"
#include "lcd.h"

int main(){
    pinMode(2, OUTPUT);
    lcdBegin(16, 2);
    lcdPrintf("Hello, World!");
    digitalWrite(2, HIGH);
}