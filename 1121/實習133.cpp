#include<stdio.h>
#include<stdlib.h>

int f(int n)
{
	if(n==1||n==2)
		return 1;
	if(n>=3)
		return f(n-1)+f(n-2);
}

int main()
{
	int num,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	printf("%d",f(i));
	return 0;
}
