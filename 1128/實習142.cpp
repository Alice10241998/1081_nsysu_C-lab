#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void move(int num[5],int size,int m)
{
	int i,new_num[size];
	
	for(i=0;i<size;i++)
		*(new_num+i) = *(num+i);
	for(i=0;i<size;i++)
		*(num+i) = *(new_num+(i+m)%5);
}

int max(int*q,int size)
{
	int i,max;
	max=*q;
	for(i=0;i<size;i++)
	{
		if(*(q+i)>max)
			max=*(q+i);
	}
	return max;
}

int main()
{
	int i,m,num[5];
	
	printf("位移數:");
	scanf("%d",&m);
	printf("\n請輸入5個整數:");
	for(i=0;i<5;i++)
		scanf(" %d",num+i);
	
	move(num,5,m);
	printf("\n位移後:");
	for(i=0;i<5;i++)
		printf("%d ",*(num+i));
	
	printf("\nMax:%d",max(num,5));
}

