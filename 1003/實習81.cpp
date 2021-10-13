#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int a,sum=0,end=1;

	while(end) 
	{
		printf("請輸入數字:");
		scanf("%d",&a);
		sum+=a;

		if(a==0)
		end=0;

	}

	printf("總合為:%d",sum);

	return 0;
}
