#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int a,sum=0,end=1;

	while(end) 
	{
		printf("�п�J�Ʀr:");
		scanf("%d",&a);
		sum+=a;

		if(a==0)
		end=0;

	}

	printf("�`�X��:%d",sum);

	return 0;
}
