#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[5],i,sum;
	
	for(i=1;i<=5;i++)
	{
		printf("請輸入第%d數字",i);
		scanf("%d",&num[i]);
		sum+=num[i];
	}

	printf("平均為:%d",sum/5);
	
}
