// test1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>

// function main begins program execution 
int main(void)
{
    int integer1 = 0;
        int integer2 = 0; 

    printf("輸入數字"); 
    scanf_s("%d", &integer1); 

    printf("輸入數字"); 
    scanf_s("%d", &integer2); 

    int sum; 
    sum = integer1 + integer2;
    int program;
    program = integer1 - integer2;
    int difference;
    difference = integer1 * integer2;
    int quotient;
    quotient = integer1 / integer2;
    int remainder;
    remainder = integer1 % integer2;


    printf("和 is %d\n", sum);
    printf(" 差 is %d\n", program);
    printf("乘積 is %d\n", difference);
    printf(" 商 is %d\n", quotient);
    printf("餘數 is %d\n", remainder);
} // end function main

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
