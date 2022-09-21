#include<stdio.h>
int main(void) {
	int integer1 = 0;
	int integer2 = 0;
	int integer3 = 0;

	printf("Enteger first integer: ");
	scanf_s("%d", &integer1);

	printf("Enteger second integer: ");
	scanf_s("%d", &integer2);

	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
	sum1 = integer1 + integer2;
	sum2 = integer1 - integer2;
	sum3 = integer1 * integer2;
	sum4 = integer1 / integer2;
	sum5 = integer1 % integer2;

	printf("加 = %d\n", sum1);
	printf("減 = %d\n", sum2);
	printf("乘 = %d\n", sum3);
	printf("商 = %d\n", sum4);
	printf("餘除 = %d\n", sum5);

	int v1 = 0, a1 = 0, e1 = 0;

	printf("v = ");
	scanf_s("%d", &v1);

	printf("a = ");
	scanf_s("%d", &a1);

	printf("e = ");
	scanf_s("%d", &e1);


	int v = v1 + a1 * e1;
	int s = v1 * e1 + a1 * e1 * 0.5;
	printf("v = %d", v);
	printf("s = %d", s);
}
