#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int num=1,a,b;

	scanf("%d",&a);
	do 
	{
		b=num%a;
		if(b==0)
			printf("%d ",num);
		num++;

	} 
	while(num<=1000);
	return 0;
}
