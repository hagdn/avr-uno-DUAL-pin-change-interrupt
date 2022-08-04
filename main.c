//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                         By Henjie Agadan
// Using dual pin interrupt pin. Baremetal programming for ATMega328p.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <avr/io.h>
#include <avr/interrupt.h>

ISR(PCINT0_vect) {
  if (PINB & 0b00000001) {
    PORTB |= (1 << PORTB2); //Button to PIN8 IS pressed
  } else if (!(PINB & 0b00000001)) {
    PORTB &= ~(1 << PORTB2); // Button to PIN8 NOT pressed
  }

  if (PINB & 0b00000010) {
    PORTB |= (1 << PORTB5); // Button to PIN9 IS pressed
  } else if (!(PINB & 0b00000010)) {
    PORTB &= ~(1 << PORTB5); // Button to Pin9 NOT pressed
  }
}

int main(void) {
  PCICR |= (1 << 0); // Activate Group 0 pin interrupts (PIN8 - PIN13)
  PCMSK0 |= (1 << PCINT0) | (1 << PCINT1); // Set PIN8 & PIN9 as interrupts

  //PORTB |=(1 << PORTB0) | (1 << PORTB1); // Pullup resistor for PIN8 & PIN9

  DDRB |= (1 << DDB2) | (1 << DDB5); // Set PIN10 & PIN13 as OUTPUT pins

  sei(); // Activate global interrupts

  while (1) {
    //...
  }
}
