#include <stdio.h>

int main(void) {
	int u = 0;
	int a = 0;
	int v = 0;
	int s = 0;
	int t = 0;
	printf("¿é¤Ju: ");
	scanf_s("%d", &u);
	printf("¿é¤Ja: ");
	scanf_s("%d", &a);
	printf("¿é¤Jt: ");
	scanf_s("%d", &t);
	v = u + a * t;
	s = u * t + 0.5 * a * t * t;
	printf("v= %d\n", v);
	printf("s= %d\n", s);
}