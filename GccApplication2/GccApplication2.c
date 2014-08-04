#include <stdint.h>
#include <avr/io.h>
#define F_CPU 12000000
#include <util/delay.h>
#include <compat/deprecated.h>

#define DELAY 500
//Set LED common port
#define set_ledcom_port0  sbi(PORTA,PA7)
#define clr_ledcom_port0  cbi(PORTA,PA7)
#define set_ledcom_port1  sbi(PORTA,PA6)
#define clr_ledcom_port1  cbi(PORTA,PA6)
#define set_ledcom_port2  sbi(PORTA,PA5)
#define clr_ledcom_port2  cbi(PORTA,PA5)
#define set_ledcom_port3  sbi(PORTA,PA4)
#define clr_ledcom_port3  cbi(PORTA,PA4)
//Set LED data port
#define set_leddata0  sbi(PORTB,PB0)
#define set_leddata1  sbi(PORTB,PB1)
#define set_leddata2  sbi(PORTB,PB2)
#define set_leddata3  sbi(PORTB,PB3)
#define set_leddata4  sbi(PORTB,PB4)
#define set_leddata5  sbi(PORTB,PB5)
#define set_leddata6  sbi(PORTB,PB6)
#define set_leddata7  sbi(PORTB,PB7)
#define clr_leddata0  cbi(PORTB,PB0)
#define clr_leddata1  cbi(PORTB,PB1)
#define clr_leddata2  cbi(PORTB,PB2)
#define clr_leddata3  cbi(PORTB,PB3)
#define clr_leddata4  cbi(PORTB,PB4)
#define clr_leddata5  cbi(PORTB,PB5)
#define clr_leddata6  cbi(PORTB,PB6)
#define clr_leddata7  cbi(PORTB,PB7)
// Main Programmer
int main( void ) {
	DDRB |= 0xF0;     // Make common port ouput
	DDRB=0xFF;       // Make data port ouput
	while(1)  {
		clr_ledcom_port0;
		clr_ledcom_port0;
		clr_ledcom_port2;
		set_ledcom_port3;
		clr_leddata0;
		set_leddata1;
		set_leddata2;
		clr_leddata3;
		clr_leddata4;
		clr_leddata5;
		clr_leddata6;
		clr_leddata7;
		_delay_ms(DELAY);
		clr_ledcom_port0;
		clr_ledcom_port1;
		set_ledcom_port2;
		clr_ledcom_port3;
		set_leddata0;
		set_leddata1;
		clr_leddata2;
		set_leddata3;
		set_leddata4;
		clr_leddata5;
		set_leddata6;
		clr_leddata7;
		_delay_ms(DELAY);
		clr_ledcom_port0;
		set_ledcom_port1;
		clr_ledcom_port2;
		clr_ledcom_port3;
		set_leddata0;
		set_leddata1;
		set_leddata2;
		set_leddata3;
		clr_leddata4;
		clr_leddata5;
		set_leddata6;
		clr_leddata7;
		_delay_ms(DELAY);
		set_ledcom_port0;
		clr_ledcom_port1;
		clr_ledcom_port2;
		clr_ledcom_port3;
		clr_leddata0;
		set_leddata1;
		set_leddata2;
		clr_leddata3;
		clr_leddata4;
		set_leddata5;
		set_leddata6;
		clr_leddata7;
		_delay_ms(DELAY);
	}
}