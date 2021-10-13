#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int func(int n)
{
	int sum=0,i;
	for(i=1;i<=n;i++)
	{
		sum+=pow(i,i);
	}
	return sum;
}

int main()
{
	int n,output;
	printf("¿é¤Jn: ");
	scanf("%d",&n);
	output=func(n);
	printf("¿é¥X: %d",output);

	return 0;
} 
