#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n,i,f1=1,f2=1,j;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) 
	{	
		printf("%d ",f1);
		j=f1+f2;
		f1=f2;
		f2=j;	
	}
	system("pause");
}

