#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a;
	float b;
	
	printf("請輸入一個整數:");
	scanf("%d",&a);
	b = (float)a;
	printf("轉換後的結果是:%.2f",b); 
	return 0;
}
