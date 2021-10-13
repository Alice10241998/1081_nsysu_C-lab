#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *length(char *a,char *b)
{
	int i,lena=0,lenb=0;
	
	for(i=0;a[i]!='\0';i++)
		lena++;
	for(i=0;b[i]!='\0';i++)
		lenb++;
	
	if(lena>=lenb)
		return a;
	if(lenb>lena)
		return b;
} 

void Reverse(char*str)
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
		len++;
	for(i=len-1;i>=0;i--)
		printf("%c",str[i]);
}

int main()
{
	char a[100],b[100];

	scanf("%s %s",a,b);
	printf("%s\n",length(a,b));
	
	Reverse(length(a,b));
	
	return 0;
}
