#include <iostream>
#include <wiringPi.h>

int main(void) {
    wiringPiSetup();
    pinMode(29, OUTPUT);
    for(int i = 0; i < 20; i++) {
        std::cout << "HIGH " << HIGH << std::endl;
	digitalWrite(29, HIGH);
        delay(5);
	std::cout << "LOW " << LOW << std::endl;
        digitalWrite(29, LOW);
        delay(5);
    }
    return 0;
}
