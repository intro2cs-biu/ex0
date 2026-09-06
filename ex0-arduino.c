#include "api/arduino.h"
#include "api/lcd.h"
#include "serial.h"
#include <stdio.h>

int main(){
    pinMode(2, OUTPUT);
    lcdBegin(16, 2);
    serialBegin(9600);
    printf("Hello, World!\n");
    lcdPrintf("Hello, World!");
    digitalWrite(2, HIGH);
}