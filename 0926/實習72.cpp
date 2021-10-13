#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,tmp;
	
	printf("請輸入2個數:");
	scanf("%d%d",&a,&b);
	
	while(a%b!=0)
	{
		tmp=b;
		b=a%b;
		a=tmp;
	}
	
	printf("最大公因數:%d",b);
	
	return 0;
}
