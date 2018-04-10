/*
 * HelloWorld2.c
 *
 * Created: 10/04/2018 10:01:37
 * Author : marega
 */ 

#define F_CPU 10000000L
#define val 1000
#include <avr/io.h>
#include <util/delay.h>

void turnOn();
void turnOff();

int main(void)
{
	DDRA = 0xff;            // setting all I/O's in port A as outputs
// turnOn(0);
while(1) {
	 PORTA = ~(1<<PA0);      // turning on led 0 (active low)
	_delay_ms(val);
	PORTA =  ~(0<<PA0);
	_delay_ms(val);
	
    PORTA = ~(1<<PA1);      // turning on led 0 (active low)
	_delay_ms(val);
	PORTA =  ~(0<<PA1);
	_delay_ms(val);
	
	PORTA = ~(1<<PA2);      // turning on led 0 (active low)
	_delay_ms(val);
	PORTA =  ~(0<<PA2);
	_delay_ms(val);
	
	PORTA = ~(1<<PA3);      // turning on led 0 (active low)
	_delay_ms(val);
	PORTA =  ~(0<<PA3);
	_delay_ms(val);
	
	PORTA = ~(1<<PA4);      // turning on led 0 (active low)
	_delay_ms(val);
	PORTA =  ~(0<<PA4);
	_delay_ms(val);
	
	PORTA = ~(1<<PA5);      // turning on led 0 (active low)
	_delay_ms(val);
	PORTA =  ~(0<<PA5);
	_delay_ms(val);
	
	PORTA = ~(1<<PA6);      // turning on led 0 (active low)
	_delay_ms(val);
	PORTA =  ~(0<<PA6);
	_delay_ms(val);
	
	PORTA = ~(1<<PA7);      // turning on led 0 (active low)
	_delay_ms(val);
	PORTA =  ~(0<<PA7);
	_delay_ms(val);
	
	return;
}

}

void turnOn(int de) {
	//PORTA = ~(1<<P); 
}

void turnOff() {
	
}
