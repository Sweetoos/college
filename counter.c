//program written on ATmega32, full descripction of this under the code

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000u1
#define key_down (!(PINB&(1<<PB2)))
#define pc PORTC
#define p0 |=(1<<PC0)
#define p1 |=(1<<PC1)
#define p2 |=(1<<PC2)
#define p3 |=(1<<PC3)
#define p4 |=(1<<PC4)
#define p5 |=(1<<PC5)
#define p6 |=(1<<PC6)


int main(void)
{
	
	DDRC = 0b11111111;
	DDRB &= ~(1<<PB2);
	PORTB |= (1<<PB2);
	int i = 0;
    while (1)
    {
		while(i<10)
		{
			
			if (i==0) //displaying 0
			{
				pc p6;
				if key_down
				{
					if key_down i++;					
				}
				_delay_ms(500);
				PORTC = 0b00000000;	
				
			}
			if (i==1) //displaying 1
			{
				pc p1;
				pc p5;
				pc p6;
				pc p4;
				pc p3;
				{
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;	
			}
			if (i==2) //displaying 2
			{
				pc p2;
				pc p5;
				{
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;		
			}
			if (i==3) //displaying 3
			{
				pc p5;
				pc p4;
				{
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;	
			}
			if (i==4) //displaying 4
			{
				pc p1;
				pc p4;
				pc p3;
				{
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;		
			}
			if (i==5) //displaying 5
			{
				pc p0;
				pc p4;
				{
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;	
			}
			if (i==6) //displaying 6
			{
				pc p0;
				{
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;		
			}
			if (i==7) //displaying 7
			{
				pc p5;
				pc p6;
				pc p4;
				pc p3;
				{
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;		
			}
			if (i==8) //displaying 8
			{
				{
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;	
			}
			if (i==9) //displaying 9
			{
				pc p4;
				{
					
					if key_down i++;
				}
				_delay_ms(500);
				PORTC = 0b00000000;		
			}
					//there would be a reset function to make this loop continuous (making i=0 at the end of this loop)		
		}
					
    }
	return 0;
}
/*
this is code from my embedded lessons at my college
the code is counting from 0 to 9 and displaying a number on 7-segment LED display
default setting was lightning on all segments and I was turning off segments which shouldn't be turned on to get my wanted number
this code isn't finished due to lack of time during lesson 

