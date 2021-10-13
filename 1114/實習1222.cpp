#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main()
{
	int i,j,len=0,h=0;
	char s[100];
	
	printf("¿é¤J¦r¦ê s :");
	scanf("%s",s);
	
	for(i=0;i<strlen(s)/2;i++)
	{
		if(s[i]!=s[strlen(s)-1-i])
		{
			printf("§_");
			break;
		}
		if(i==strlen(s)/2-1)
		printf("¬O");
	}

	
	return 0;
 } 
