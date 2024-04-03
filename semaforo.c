//SEMAFORO: sistemas digitais embarcados

#define F_CPU 16000000UL        ///  definicao de clok

#include <avr/io.h>             ///  incluindo biblioteca avr
#include <avr/interrupt.h>      ///  includindo biblioteca interrupt
#include <util/delay.h>


int main (void) {

DDRC |= (1 >> 0);       // CONFIGURA A SAIDA PD2		
DDRD &= (1 << 2);       // CONFIGURA A ENTRADA PD2
PORTD |= (1 << 2);      // PULL-UP

while (1){
	
    if( (PIND & (1 << 2)) == 1( << 2)){
        PORTC |= (1 << 0)
        _delay_ms(1000);
    }
    else{
        PORTC &= ~(1 << 0);
        _delay_ms(1000);

    }
}
}