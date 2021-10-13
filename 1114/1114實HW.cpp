#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,n=3;
	char ans[100]={'\0'},input[100]={'\0'};
	FILE*file=fopen("input.txt","r");
	fscanf(file,"%s",ans);
	printf("Question\n");
	//printf("%s\n",ans);
	for(i=0;i<strlen(ans);i++)
	{
		input[i]=ans[i];
		if(ans[i]!='a'&&ans[i]!='e'&&ans[i]!='i'&&ans[i]!='o'&&ans[i]!='u')
			input[i]='_';
	}
	
	while(1)
	{
		char ch;
		printf("%s\n",input);
		printf("Enter a character:");
		scanf(" %c",&ch);
		int update=0,ok=0;
		
		for(i=0;i<strlen(ans);i++)
		{
			if(input[i]!='_')
			{
				ok++; 
				continue;
			}	
			if(ch==ans[i])
			{
				input[i]=ans[i];
				update=1;
				ok++;
			}
		}
		
		if(ok==strlen(ans))
		{
			printf("%s\n",ans);
			break;
		}
		
		if(update==1)
			continue;
		n--;
		if(n==0)
		{
			printf("Game over\n");
			break;
		}
		else
		{
			printf("Please try again , hp :%d\n",n);	
		}
	}
	return 0;
}
