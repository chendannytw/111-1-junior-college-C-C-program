// Fig. 4.6: fig04_06.c
// Calculating compound interest
#include <stdio.h>
#include <math.h>  

int main(void)
{//改為輸入本金、利率、年數，印出 歷年的本利和 
    double principal; // starting principal
    double rate; // annual interest rate
    int year;
    printf("請輸入本金:");
    scanf_s("%lf", &principal);
    printf("請輸入利率:");
    scanf_s("%lf", &rate);
    printf("請輸入年數:");
    scanf_s("%d", &year);
    // output table column heads
    printf("Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (unsigned int count=0; count <= year; ++count) {

        // calculate new amount for specified year
        double amount = principal * pow(1.0 + rate, count);

        // output one table row
        printf("%4u%21.2f\n", count, amount);
    }
}