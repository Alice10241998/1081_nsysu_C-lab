#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;
	while(1)
	{
		int k=0;
		printf("�п�J�Ʀr:");
		scanf("%d",&num);
		
		if(num==0)
			break;
			
		if(num==1)
		{
			printf("�D���\n");
			k=1;
		}
			

		if(num==2)
			printf("���\n");
		
		else
		{
			for(i=2;i<num;i++)
			{
				if(num%i==0)
				{
					printf("�D���\n");
					k=1;
					break;	
				}
			}
			if(k==0)
				printf("���\n");
		}
	}
	return 0;	
} 
