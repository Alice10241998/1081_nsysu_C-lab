#include<stdio.h>
#include<stdlib.h>

void func(int d,char letter)
{
	int i=0;
	for(i=letter;i<='Z';i+=d)
	  printf(" %c",i);
}

int main()
{
	int d;
	char letter;
	printf("��J�첾��: ");
	scanf("%d",&d);
	printf("��J�_�l�r��: ");
	scanf(" %c",&letter);
	printf("��X: ");
	func(d,letter);
} 

