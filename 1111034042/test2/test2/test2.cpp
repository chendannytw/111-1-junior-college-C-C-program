#include <stdio.h>

// function main begins program execution
int main(void)
{
	printf("輸入三個數字:");
	int a = 0, b = 0, c = 0;
	int max = 0;
	int small = 9999;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a>max)
		max = a;
	if (b>max)
		max = b;
	if (c>max)
		max = c;
	if (a<small)
		small = a;
	if (a<small)
		small = b;
	if (a<small) 
		small= c;
	printf("最小%d\n", small);
	printf("最大%d\n", max);
    }