﻿// Fig. 5.3: fig05_03.c
// Creating and using a programmer-defined function.
#include <stdio.h> 

int square(int); // function prototype 函數的原型宣告 
int facto(int);
double exponent(int);
//double expon(int, double);

int main(void)
{
	int x;
	// loop 10 times and calculate and output square of x each time
	for (x = 1; x <= 15; ++x) {
		//printf("%d  ", square(x)); // function call  //呼叫函數 
		//printf("\n%d  ", facto(x));
		printf("\n%lf  ", exponent(x));
		//printf("\n%lf  ", expon(10,x));
	}

	puts("");
}

// square function definition returns the square of its parameter 
int square(int y) // y is a copy of the argument to the function
{
	return y * y; // returns the square of y as an int              
}  //函數的定義(本尊) 


int facto(int y) // y is a copy of the argument to the function
{
	int result = 1, i;
	for (i = 1; i <= y; i++)
		result = result * i;
	return result; // returns the square of y as an int              
}  //函數的定義(本尊) 



double exponent(int y) // y is a copy of the argument to the function
{
	int result = 1, i;
	double expo = 1;
	for (i = 1; i <= y; i++) {
		result = result * i;
		expo = expo + (1.0 / result);
	}
	return expo; // returns the square of y as an int              
}  //函數的定義(本尊