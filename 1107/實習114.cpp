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
	printf("�̤j��:%d\n",max);
	printf("�̤j��_���ޭ�:%d\n",index);
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
	printf("�̤p��:%d\n",min);
	printf("�̤p��_���ޭ�:%d\n",index);
}

int main()
{
	int num[5],i,sum,size;
	for(i=0;i<5;i++)
	{
		printf("�п�J��%d�ӼƦr",i+1);
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	
	printf("������:%d\n",sum/5);
	
	min(num,5);
	max(num,5);
} 
