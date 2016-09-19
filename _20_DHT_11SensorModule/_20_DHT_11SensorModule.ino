/***********************************************************
File name: _20_DHT_11SensorModule.ino
Description: you can see the temperature and humidity data
             displayed in the serial monitor.
Website: www.adeept.com
E-mail: support@adeept.com
Author: Tom
Date: 2016/06/15 
***********************************************************/
#include <dht11.h>
dht11 DHT11;
#define DHT11PIN 2  //Set the digital 2 to the S pin
void setup()
{ 
     Serial.begin(9600);   //opens serial port, sets data rate to 9600 bps
     delay(1000);          //delay1000ms
}
void loop()
{
    int chk = DHT11.read(DHT11PIN);
    Serial.print("Humidity:");
    Serial.print((float)DHT11.humidity);      //send humidity to the serial monitor
    Serial.print("RH     ");
    Serial.print("Temperature:");
    Serial.print((float)DHT11.temperature);   //send temperature to the serial monitor 
    Serial.println("C");  
    delay(1000);                               //delay 1 s  
}
