#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int a=3,b=2;
	while(a%b!=0) 
	{
		printf("請輸入兩數:");
		scanf("%d%d",&a,&b);
	}

	printf("%d可以被%d整除",a,b);
	
	return 0;
}






