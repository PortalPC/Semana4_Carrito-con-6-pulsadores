#define F_cpu 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void){
  DDRB |=0x0F;
  DDRD &= ~0xFC
  PORTD |= 0xFC

  while(1){
    if(!(PIND & (1<<PD2))){
      PORTB = 0b00000101;

    }else if(!(PIND & (1<<PD3))){
      PORTB = 0b00001010;

    }else if(!(PIND & (1<<PD4))){
      PORTB = 0b00001001;

    }else if(!(PIND & (1<<PD5))){
      PORTB = 0b00000110;

    }else if 