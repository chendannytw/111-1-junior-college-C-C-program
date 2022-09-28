#include <stdio.h>

// function main begins program execution
int main(void)
{
    printf("Enter a grade, and I will tell you\n");
    printf("the results: ");

    int num1; // first number to be read from user
    //int num2; // second number to be read from user

    scanf_s("%d", &num1); // read two integers

    if (num1 >= 90) {
        puts("A");
    }
    else {
        if (num1 >= 80) {
            puts("B");
        }
        else {
            if (num1 >= 70) {
                puts("c");
            else {
                if (num1 >= 60) {
                    puts("D");
                else {
                    puts("F");
                     }
                }
            }
    }
    return 0;