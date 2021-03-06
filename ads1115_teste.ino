#include <Wire.h>
#include <Adafruit_ADS1115.h>

Adafruit_ADS1115 ads(0x48);
float Voltage = 0.0;

void setup(void) 
{
Serial.begin(9600); 
ads.begin();
}

void loop(void) 
{
int16_t adc0;

adc0 = ads.readADC_SingleEnded(0);
Voltage = (adc0 * 0.1875)/1000;

Serial.print("AIN0: "); 
Serial.print(adc0);
Serial.print("\t Tensao: ");
Serial.println(Tensao, 7); 
Serial.println();

delay(1000);
}
