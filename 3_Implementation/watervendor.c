/**
 * @file watervendor.c
 * @author Prabakaran
 * @brief This code is the for water vending system 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <mcu.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
double Cycle = 0;
/**
 * @brief this function is the main function that contains  input and output and the function
 * the cycle is for analog input
 * 
 *
 */

int main(void)
{
	/**
	 * @brief The DDRD gives the port D6 as output and DDRB sets PortB0 as output
	 * Port B1 is the digital input
	 * Port C5 is the analog input
	 */
	DDRD = (1 << PORTD6);
    DDRB = 0x01;
    PORTB =0x02;	
	TCCR0A = (1 << COM0A1) | (1 << WGM00) | (1 << WGM01);
	TIMSK0 = (1 << TOIE0);
	
	startADC();
    sei();
	
	TCCR0B = (1 << CS00) | (1 << CS02);
	/**
	 * @brief 
	 * The logic in the while loop is that when the B1 is HIGH the the output in B0 is HIGH or else output in B0 is low 
	 */
	while(1)
	{
        if(!(PINB & 0x02)){
            PORTB |= 0x01;
        }else{
            PORTB &= 0xFE;

        }
	}
}
/**
 * @brief The startADC function is to setup the analog to digital converter
 * 
 */
void startADC()
{
	ADMUX = (1 << REFS0) | (1 << MUX0) | (1 << MUX2);
	ADCSRA = (1 << ADEN) | (1 << ADIE) | (1 << ADPS0) | (1 << ADPS1) | (1 << ADPS2);
	DIDR0 = (1 << ADC5D);
	
	Conversion();
}
/**
 * @brief 
 * The conversion function converts the digital value for analog read value 
 */
void Conversion()
{
	ADCSRA |= (1 << ADSC);
}

ISR(TIMER0_OVF_vect)
{
	OCR0A = Cycle;
}

ISR(ADC_vect)
{
	Cycle = ADC;
	Conversion();
}