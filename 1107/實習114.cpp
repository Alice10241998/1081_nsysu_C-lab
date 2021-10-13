#include<stdio.h>
#include<stdlib.h>

void max(int num[],int size)
{
	int i,max=num[0],index=-1;
	for(i=0;i<size;i++)
	{
		if(num[i]>=max)
		{
			max=num[i];
			index=i;
		}
	}
	printf("程:%d\n",max);
	printf("程_ま:%d\n",index);
}

void min(int num[],int size)
{
	int i,min=num[0],index=-1;
	for(i=0;i<size;i++)
	{
		if(num[i]<=min)
		{
			min=num[i];
			index=i;
		}
	}
	printf("程:%d\n",min);
	printf("程_ま:%d\n",index);
}

int main()
{
	int num[5],i,sum,size;
	for(i=0;i<5;i++)
	{
		printf("叫块材%d计",i+1);
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	
	printf("キА:%d\n",sum/5);
	
	min(num,5);
	max(num,5);
} 
