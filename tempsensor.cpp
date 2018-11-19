//Authors: Bader, Edgar, Edmund, Emanuel, Nicole
//
//Date: 18 Nov 2018
//Assignment: Final Project
//File: tempsensor.cpp
//----------------------------------------------------------//

#include "tempsensor.h"

#include <Wire.h>

/*sensor initialization*/
void tempInit(){
    //timer begin

    //if tempsensor does not start
        //Print "Temp Sensor Error"

}
/*sensor work*/
void tempSensorLoop(){
    //float c = tempsensor.reatTempC();
    //float f = c * 9.0 / 5.0 + 32;

    //add value to get actual temperature
    //float value = f + 7 degrees

}

/*sensor conversion*/



//-------------------------------------//
//------------------------------------//
//arduino code
#include <Wire.h>
#include "Adafruit_MCP9808.h"

// Create the MCP9808 temperature sensor object
Adafruit_MCP9808 tempsensor = Adafruit_MCP9808();

void setup() {
  Serial.begin(9600);
  Serial.println("MCP9808 demo");
  
  // Make sure the sensor is found, you can also pass in a different i2c
  // address with tempsensor.begin(0x19) for example
  if (!tempsensor.begin()) {
    Serial.println("Couldn't find MCP9808!");
    while (1);
  }
}

void loop() {
  // Read and print out the temperature, then convert to *F
  float c = tempsensor.readTempC();
  float f = c * 9.0 / 5.0 + 32;
  Serial.print("Temp: "); Serial.print(c); Serial.print("*C\t"); 
  Serial.print(f); Serial.println("*F");
  
  //Serial.println("Shutdown MCP9808.... ");
  //tempsensor.shutdown(); // shutdown MSP9808 - power consumption ~0.1 mikro Ampere
  
  delay(1000);
}
