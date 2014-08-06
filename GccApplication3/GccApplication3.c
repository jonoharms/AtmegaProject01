/*
 * GccApplication3.c
 *
 * Created: 4/08/2014 2:42:07 PM
 *  Author: Jonathon
 */ 

#define F_CPU 12000000
#include <stdint.h> 
#include <avr/io.h> 
#include <util/twi.h> 
#include <util/delay.h> 
#include <compat/deprecated.h>

#define uchar unsigned char 
#define uint unsigned int 
#define FREQ 4

void DelayMs(uint ms) {  
	uint i;  
	for(i=0;i<ms;i++)   
	_delay_loop_2(FREQ*250); 
} 

void PWM(uchar pwmduty) {  
	TCCR2=_BV(WGM20)|_BV(COM21)|_BV(CS22); 
	//CLK/64  
	TCNT2=0;  
	DDRD |= _BV(PD7);  
	OCR2=pwmduty;  
	DelayMs(100);  
} 
	
int main (void) {  
	uint i=0;  
	while(1)
	{   i++;   
		if(i%100==0)    
			PWM(4);   
		else    
			PWM(0);   
	} 
}