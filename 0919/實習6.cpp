#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a;
	printf("�п�J�~��:");
	scanf("%d",&a);
	
	if(a%4==0&&a%100!=0)
		printf("\n%d�~�O�|�~",a); 
		
	else if(a%400==0)
		printf("\n%d�~�O�|�~",a); 
	else
		printf("\n%d�~���O�|�~",a);
		
	return 0;
}
