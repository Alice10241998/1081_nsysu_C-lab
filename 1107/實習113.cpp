#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[5],i,sum;
	
	for(i=1;i<=5;i++)
	{
		printf("�п�J��%d�Ʀr",i);
		scanf("%d",&num[i]);
		sum+=num[i];
	}

	printf("������:%d",sum/5);
	
}
