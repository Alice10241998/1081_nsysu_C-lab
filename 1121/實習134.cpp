#include<stdio.h>
#include<stdlib.h>

int f(int m,int n)
{
	if(m==0)
		return n+1;
	else if (m>0&&n==0)
		return f(m-1,1);
	else if (m>0&&n>0)
		return f(m-1,f(m,n-1));
}

int main()
{
	int num,num2;
	scanf("%d%d",&num,&num2);
	printf("%d ",f(num,num2));
	return 0;
}
