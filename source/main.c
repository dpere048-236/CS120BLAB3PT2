/*	Author: dpere048
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
Unsigned char tmpA = 0x00;
Unsigned char tmpC = 0x00;

    /* Insert your solution below */
    while (1) {
	tmpA = (PINA&0x0F);
	tmpC = 0x00;
if(tmpA == 13 || tmpA == 14 || tmp A = 15){
	tmpC = 0x3F;
}
else if(tmpA == 10 || tmpA == 11 || tmpA ==12){
	tmpC = 0x3E;
}
else if(tmpA == 7 || tmpA == 8 || tmpA = 9){
	tmpC = 0x3C;
}
else if(tmpA == 5 || tmpA == 6){
	tmpC = 0x38;
}
else if(tmpA == 3 || tmpA == 4){
	tmpC = 0x30;
}
else if(tmpA == 1 || tmpA == 2){
	tmpC = 0x20;}
}
else{
	tmpC = 0;
}
if(tmp A <= 4){
	tmpC = tmpC | 0x40;
}
PORTC = tmpC;
    }
    return 1;
}
