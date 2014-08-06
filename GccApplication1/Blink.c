/*
 * GccApplication1.c
 *
 * Created: 4/08/2014 12:43:55 PM
 *  Author: Jonathon
 */ 

#include <stdint.h>
#include <avr/io.h>
#define F_CPU 12000000
#include <util/delay.h>
#include <compat/deprecated.h>


#define en_led3     cbi(PORTA,PA0) 
#define disen_led3   sbi(PORTA,PA0) 
#define en_led4     cbi(PORTA,PA1) 
#define disen_led4  sbi(PORTA,PA1) 
#define en_led5     cbi(PORTA,PA2) 
#define disen_led5  sbi(PORTA,PA2) 
#define en_led6    cbi(PORTA,PA3)  
#define disen_led6  sbi(PORTA,PA3)

int main( void ) {  
	DDRA=0xFF;                      // All PORTA is output port
	while(1)  {
		   en_led3;   
		   en_led4;   
		   en_led5;   
		   en_led6;  
		 //  _delay_ms(1000);   
		   _delay_ms(100);
		   

			disen_led3;   
			disen_led4;   
			disen_led5;   
			disen_led6;  
			_delay_ms(100);   
		//	_delay_ms(1000);  
	} 
}