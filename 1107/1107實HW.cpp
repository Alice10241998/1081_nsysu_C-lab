#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i,j,num[100];
	srand(time(NULL));
	
	for(i=0;i<100;i++)
	{
		num[i]=(rand()%100)+1;
	}
	
		int temp=0;
		for(i=0;i<100;i++)
		{
			for(j=i;j<100;j++)
			{
				if(num[j]<num[i])
				{
					temp=num[j];
					num[j]=num[i];
					num[i]=temp;
				}
			}
		}
	for(i=0;i<100;i++)	
	{
		printf("%d ",num[i]);
	}	
	
	return 0;
}
