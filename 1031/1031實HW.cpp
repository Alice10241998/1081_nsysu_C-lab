#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input,i,j;

	while(1)
	{
		j=1;
		printf("�п�J�Ʀr : ");
		scanf("%d",&input);
		
		if(input==0)
			break;

		if(input==1)
			printf("�D���\n");

		if(input!=1)
		{
			for(i=2; i<input; i++)
			{
				if(input>2 && input%i==0)
				{
					printf("�D���\n");
					j=0;
					break;
				}
			}
		}
		if(j==1&& input!=1)
			printf("�O���\n");		
	}
	return 0;
}


