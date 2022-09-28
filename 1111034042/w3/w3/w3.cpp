// w3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

int main(void) {
	printf("輸入三個數字:");
	int a = 0, b = 0, c = 0;
	int max = 0;
	int small = 9999;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a >= max) {
		max = a;
	}
	else {
		max = b;
	}
	if (c >= max) {
		max = c;
	}
	if (a <= small) {
		small = a;
	}
	else {
	small = b;
}
if (c < small) {
	small = c;
}
	printf("最小%d\n", small);
    printf("最大%d\n",max);
}



