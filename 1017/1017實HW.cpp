#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,a,b;
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=n-a;b++)
		printf(" ");
		printf("*");
		
		for(b=1;b<=2*(a-1)-1;b++)
		{
			if(a==n&&b==(2*(a-1)-1+1)/2)
			printf("%d",n);
			else
			printf(" ");
		}
		
		if(a==1)
		printf("\n");
		else
		printf("*\n");
	}
	
	for(a=1;a<n;a++)
	{
		for(b=1;b<=a;b++)
		printf(" ");
		printf("*");

		for(b=2*(n-a-1)-1;b>=1;b--)
		printf(" ");
	
		if(a==n-1)
		printf("\n");
		else
		printf("*\n");
	}
	return 0;
}
