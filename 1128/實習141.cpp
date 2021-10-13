#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *str;
	char input[100];
	int i,len=0;

	gets(input);
	str=input;
	
	for(i=0;str[i]!='\0';i++)
		len++;	
	
	printf("³æ:");
	for(i=0;i<=len;i+=2)
		printf("%c ",str[i]);
				
	printf("\n°¸:");
	for(i=1;i<=len;i+=2)
		printf("%c ",str[i]);

/*
	char input[50]={0};
	int i;
	
	gets(input);
	
	printf("³æ:");
	for(i=0;i<=50;i+=2)
		printf("%c ",*(input+i));
				
	printf("\n°¸:");
	for(i=1;i<=50;i+=2)
		printf("%c ",*(input+i));
*/		
	return 0;
	
} 
