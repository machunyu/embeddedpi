#include "arduPi.h"

void setup(void)
{
	AD.begin();
	pinMode(3, OUTPUT);        // Set sD3 as ouput mode
}

void loop(void)
{
    unsigned long ulADCTmp = AD. GetValue(0);     // Get the adc digital value of channel 0
    printf("ADC: %d (mV)\n", ulADCTmp*3300/4095);     // Print the adc value
    delay(100);         // Sleep about 100ms
}

int main()
{
    setup();
    while(1){
        loop();
    }
    return (0);
}