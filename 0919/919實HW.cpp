#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,c,side;
	
	printf("Please input first side: ");
	scanf("%c",&a);
	printf("Please input second side: ");
	scanf(" %c",&b);
	printf("Please input third side: ");
	scanf(" %c",&c);
	
	printf("First's ASCII is :%d",a);
	printf("\nSecond's ASCII is :%d",b);
	printf("\nThird's ASCII is :%d",c);
	
	if(a>=b)
	{
		if(a>=c)
		{
			side=a;
			a=c;
			c=side;
		}
	 } 
	 else
	 {
	 	if(b>=c)
	 	{
	 		side=b;
	 		b=c;
	 		c=side;
		 }
	 }
	
	if(a+b>c)
		printf("\nIt is a triangle\n");
	else
		{
		printf("\nIt is not a triangle\n");
		return 0;
		}
		
	if(a*a+b*b<c*c)
		printf("It is a Obtuse triangle\n");
	else if(a*a+b*b>c*c)
		printf("It is a Acute triangle\n");
	else
		printf("It is a Right triangle\n");
	
	return 0;
}
