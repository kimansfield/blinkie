/* 
 * File:   blink.c
 * Author: viitanenm
 *
 * Created on April 5, 2013, 11:45 AM
 */

#include <p24FJ64GB002.h>

#define DELAY 2000

int main(int argc, char** argv) {
    TRISB = 0x0000;
    T1CON = 0x8030;

    while (1) {
        LATB = 0xFFFF;
        TMR1 = 0;
        while (TMR1 < DELAY) {
        }

        LATB = 0x0000;
        TMR1 = 0;
        while (TMR1 < DELAY) {
        }
    } // main loop
} // main