/*
 * HelloWorld3.c
 *
 * Created: 10/04/2018 10:42:37
 * Author : marega
 */ 
#define F_CPU 10000000L
#define val 1000
#include <avr/io.h>
#include <math.h>
#include <util/delay.h>


void turnOn();
void turnOff();

int n;
int i;

int main(void)
{
	DDRA = 0xff;            // setting all I/O's in port A as outputs

    while (1) 
    {
		
		for (n = 2; n < 100;n++) {
			for (i = 2; i <=n; i++) {
				
				if (n == i) {
					turnOn(~n);
					turnOff();
				}
				else if (n % i == 0) {
				break;
				}
			}
		}
    }
}

void turnOn(int value) {
	 PORTA =value;      // turning on led 0 (active low)
	_delay_ms(val);
	
}

void turnOff() {
	PORTA = 0Xff;
	_delay_ms(val);
}



/*	int i,j, n_div;
    while (1) 
    {
		
		for (i = 1; i <= 100;i++) {
			n_div = 0;
			for (j = 1; j <= i; j++) {
				if (i % j == 0) {
					n_div= n_div + 1;
				}
					if (n_div==2) {
						turnOn(~i);
						turnOff();
				}	
			}
		}
    }*/