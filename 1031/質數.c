#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;
	while(1)
	{
		int k=0;
		printf("請輸入數字:");
		scanf("%d",&num);
		
		if(num==0)
			break;
			
		if(num==1)
		{
			printf("非質數\n");
			k=1;
		}
			

		if(num==2)
			printf("質數\n");
		
		else
		{
			for(i=2;i<num;i++)
			{
				if(num%i==0)
				{
					printf("非質數\n");
					k=1;
					break;	
				}
			}
			if(k==0)
				printf("質數\n");
		}
	}
	return 0;	
} 
