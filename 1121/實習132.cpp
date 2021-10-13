#include<stdio.h>
#include<stdlib.h>

int sum(int num)
{
	if(num==1)
		return 1;
	else
		return sum(num-1)*num;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d! = %d",n,sum(n));
	return 0;
}
