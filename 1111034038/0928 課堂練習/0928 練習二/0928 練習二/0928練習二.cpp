#include<stdio.h>
int main(void) {
	printf("Enter three number, and i will tell you the largest, the smallest, sum, avg, and the product\n");
	int num1 = 0, num2 = 0, num3 = 0;
	int max = 0, min = 9999;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	if (num1 >= max) {
		max = num1;
	}
    else {
		max = num2;
	}
    if (num3 >= max) {
		max = num3;
	}

	if (num1 <= min) {
		min = num1;
	}
    else {
		min = num2;
	}
    if (num3 <= min) {
		min = num3;
	}
	printf("max is %d\n", max);
	printf("min is %d\n", min);
}