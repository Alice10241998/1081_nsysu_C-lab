#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a;
	printf("請輸入年份:");
	scanf("%d",&a);
	
	if(a%4==0&&a%100!=0)
		printf("\n%d年是閏年",a); 
		
	else if(a%400==0)
		printf("\n%d年是閏年",a); 
	else
		printf("\n%d年不是閏年",a);
		
	return 0;
}
