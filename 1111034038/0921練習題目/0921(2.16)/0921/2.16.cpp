#include<stdio.h>
int main(void) {
	int number1 = 0;
	int number2 = 0;
	printf("輸入數字一: ");
	scanf_s("%d", &number1);

	printf("輸入數字二: ");
	scanf_s("%d", &number2);

	int sum = 0;
	int difference = 0;
	int product = 0;
	int quotient = 0;
	int remainder = 0;
	sum = number1 + number2;
	difference = number1 - number2;
	product = number1 * number2;
	quotient = number1 / number2;
	remainder = number1 % number2;
    printf("sum is %d\n", sum);
	printf("difference is %d\n", difference);
	printf("product is %d\n", product);
	printf("quotient is % d\n", quotient);
	printf("remainder is % d\n", remainder);
}