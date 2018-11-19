//Author: Bader, Edgar, Edmund, Emanuel, Nicole Muchow
//
//Date: 10 November 2018
//
//Assignment: Final Project
//
//Description: This is the main file that will call appropriate functions
//from the other files and will run the code for the project.
//
//-------------------------------------------------------------

#include <avr/io.h>
#include "heartbeat.h"
#include "tempsensor.h"

int main(){

    //stuff from LCD Lab, will need LCD stuff for this lab
    initTimer0();
    initLCD();
    moveCursor(1,4);
    writeString("Hello!");


    while(1){

    }

    return 0;

}
