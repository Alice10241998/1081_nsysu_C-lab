#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b)
{
	printf("%d * %d = %2d ",a,b,a*b);
	
	if(a==9&&b==9)
		return 1;
	else if(b==9)
	{ 
		printf("\n");
		return sum((a+1),1);
	} 
	else
		return sum(a,b+1);
			
}

int main()
{
	sum(1,1);
	return 0;
}
