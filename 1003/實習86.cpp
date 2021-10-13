#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	char ASCII='A';
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if((i+j)%2==0)
			{
				printf("%c",ASCII);
				ASCII++;
				
				if(ASCII>'Z')
				ASCII='A';
			}
				
			else
			printf("_");
			
		}
		printf("\n");
	}
	
	return 0;
}
