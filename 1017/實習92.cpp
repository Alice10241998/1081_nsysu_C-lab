#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n,a,b;
	while(true)
	{
	printf("請勿輸入非數字。n");
	printf("請輸入菱形對角線長度(必須是奇數)，離開請輸入0: ");
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
