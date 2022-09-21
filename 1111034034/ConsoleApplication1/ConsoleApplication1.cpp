// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

int main(void) {
	int integer1 = 0;
	int integer2 = 0;
	printf("Enter first integer:");
	
	scanf_s("%d", &integer1);
	printf("Enter second integer:");
	scanf_s("%d", &integer2);
	int a= integer1 + integer2;
	int b = integer1 - integer2;
	int c = integer1 * integer2;
	int d = integer1 / integer2;
	int e = integer1 % integer2;
	
	printf("和 is %d\n" ,a);
	printf("差 is %d\n ",b);
	printf("乘積 is %d\n ",c);
	printf("商 is %d\n ",d);
	printf("餘數 is %d\n ",e);


}


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
