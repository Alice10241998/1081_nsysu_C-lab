#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int input=1,a,b;

	while(input!=0) 
	{

		scanf("%d",&input);

		for(a=1; a<=input; a++) 
		{
			for(b=1; b<=input-a; b++)
				printf(" ");
			for(b=1; b<=2*a-1; b++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}
