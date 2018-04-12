/*
 * HelloWorld4.c
 *
 * Created: 12/04/2018 10:27:32
 * Author : marega
 */ 

#include <avr/io.h>
#include <math.h>

int power(int x, int y);
void multiSwap(int x, int y, int z);
int sum_arrays(a[], b[]);

int main(void)
{
    int h;
	int a[3], b[4];
	
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	
	 b[0] = 2;
	 b[1] = 2;
	 b[2] = 2;
	 b[3] = 2;
	 
	h = power(2,3);
	printf("%d",h);
}

int power(int x, int y) {
	return pow(x,y); 
}

void multiSwap(int x, int y, int z) {
	int temp;
	temp  = x;
	x = y;
	y = z;
	z = temp;
}

int sum_arrays(a[], b[]) {
	int i, j  sumA, sumB;
	for(i=0; i<= sizeof(a) / sizeof(a[0]; i++) {
	sumA += a[i] }
	for(j=0; j<= sizeof(b) / sizeof(b[0]; j++) {
	sumB += b[i] }
	return sumA + sumB;
}
