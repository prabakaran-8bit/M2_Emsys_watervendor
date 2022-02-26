
#include <avr/io.h>
#include "header.h"

//header to enable data flow control over pins

#define F_CPU 1000000    

//telling controller crystal frequency attached

#include <util/delay.h>

//header to enable delay function in program

int main(void)

{

                                DDRB = 0xFF;

                             //putting portb as ouput. PWM0 ouput pin is at 3

                                DDRD = 0x00;

                             //taking portd as input for input commands from buttons.             

                TCCR1A |=(1<<WGM11)|(1<<COM1A1)|(1<<COM1A0);

                TCCR1B |=(1<<WGM12)|(1<<WGM13)|(1<<CS10);

                ICR1 =19999;    

while (1)
       {
           int i;

                          if (i<500)

                        {

                                    OCR1A = 19999-600;//for every 500ms move servo to 180

                        }

                                    i++;

                        _delay_ms(1);

                        if (bit_is_set(PIND,0))

                        {

                                    PORTB|=(1<<PINB2);//is fire is sensed set the alarm.

                        }

                        if (bit_is_clear(PIND,1))

                        {

                                    PORTB&=~(1<<PINB2);

                        }

                        if ((i<1000)&&(i>500))

                        {

                                    OCR1A = 19999-2400; // for every 500ms move servo to 0

                        }

                        if (i==1000)

                        {

                                    i=0;

                        }

            }}