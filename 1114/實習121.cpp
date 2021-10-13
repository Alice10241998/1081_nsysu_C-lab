#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main()
{
	int i=0,j;
	char str[10];
	
	printf("¿é¤J¦r¦ê s :");
	scanf("%s",str);
	
	while(str[i]!='\0')
	{
		i++;
	}
	
	for(j=i-1;j>=0;j--)
	printf("%c",str[j]);
	
	return 0;
 } 
