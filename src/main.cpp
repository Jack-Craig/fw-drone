#include <iostream>
#include <wiringPi.h>

int main(void) {
    wiringPiSetup();
    pinmode(0, OUTPUT);
    for(int i = 0; i < 20; i++) {
        digitalWrite(0, HIGH);
        delay(500);
        digitalWrite(0, LOW);
        delay(500);
    }
    return 0;
}
