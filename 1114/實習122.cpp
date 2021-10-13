#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main()
{
	int i,j,len=0,h=0;
	char s[100];
	
	printf("¿é¤J¦r¦ê s :");
	scanf("%s",s);
	
	while(s[len]!='\0')
	{
		len++;
	}
	
	for(i=0,j=len-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		h=1;
	}
	if(h==1)
	printf("§_\n");
	else
	printf("¬O\n");
	
	return 0;
 } 
