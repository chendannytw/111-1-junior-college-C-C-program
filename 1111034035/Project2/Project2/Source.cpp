#include <stdio.h>

int main(void) {
    printf("Enter three integer and I will tell you\n");
    printf("the sum ,average, product, the laegest and the smallest values: ");

    int a = 0, b = 0, c = 0;
    int max = 0, min = 9999;
    scanf_s("%d %d %d", &a ,&b , &c);
    if (a >= max) {
        max = a;
    }
    else {
        max = b;
    }
    if (c >= max) {
        max = c;
    }

    if (a <= min) {
        min = a;
    }
    else {
        min = b;
    }
    if (c <= min) {
        min = c;
    }
    printf("max is %d\n", max);
    printf("min is %d\n", min);
}
