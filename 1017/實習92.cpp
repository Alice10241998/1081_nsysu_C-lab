#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n,a,b;
	while(true)
	{
	printf("�Фſ�J�D�Ʀr�Cn");
	printf("�п�J�٧ι﨤�u����(�����O�_��)�A���}�п�J0: ");
	scanf("%d",&n);
	if(n==0)
		break;
	if(n%2==0)
		continue;
		
	int up=n/2+1;
	int down=n/2;
	
	for(a=1;a<=up;a++)
	{
		for(b=1;b<=n-a;b++)
			printf(" ");
		for(b=1;b<=2*a-1;b++)
			printf("*");
		printf("\n");
	}
	
	for(a=up;a>=1;a--)
	{
		for(b=1;b<=n-a;b++)
			printf(" ");
		for(b=1;b<=a*2-1;b++)
			printf("*");
		printf("\n");
	}
	}
	return 0;
}
