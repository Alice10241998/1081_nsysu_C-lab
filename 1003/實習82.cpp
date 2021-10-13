#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int num=1,a,b;

	scanf("%d",&a);
	while(num<=1000) 
	{
		b=num%a;
		if(b==0)
		printf("%d ",num);
		num++;

	}
	return 0;
}
