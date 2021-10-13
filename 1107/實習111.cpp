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
	printf("輸入位移數: ");
	scanf("%d",&d);
	printf("輸入起始字母: ");
	scanf(" %c",&letter);
	printf("輸出: ");
	func(d,letter);
} 

