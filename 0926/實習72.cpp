#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,tmp;
	
	printf("�п�J2�Ӽ�:");
	scanf("%d%d",&a,&b);
	
	while(a%b!=0)
	{
		tmp=b;
		b=a%b;
		a=tmp;
	}
	
	printf("�̤j���]��:%d",b);
	
	return 0;
}
