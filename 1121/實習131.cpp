#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void polyAdd(int a[10],int b[10])
{
	int c[10],i;
	for(i=0;i<10;i++)
		c[i]=a[i]+b[i];
	
	printf("A: ");
	for(i=0;i<10;i++)
	{
		if(i==9)
			printf("%d",a[i]);
		else
			printf("%2d x^%d + ",a[i],9-i);
	}
	
	printf("\nB: ");
	for(i=0;i<10;i++)
	{
		if(i==9)
			printf("%d",b[i]);
		else
			printf("%2d x^%d + ",b[i],9-i);
	}
	
	printf("\nC: ");
	for(i=0;i<10;i++)
	{
		if(i==9)
			printf("%d",c[i]);
		else
			printf("%2d x^%d + ",c[i],9-i);
	}
}

int main()
{
	int i,a[10],b[10];
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%10;
		b[i]=rand()%10;
	}
	polyAdd(a,b);
}
