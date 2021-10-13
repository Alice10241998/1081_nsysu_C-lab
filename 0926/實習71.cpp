#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("===== 遊樂園購票處 =====\n");
	printf("成人:300 兒童、老人:50\n");
	
	int a,b,c;
	char input='n';
	
	while(input!='y')
	{
		printf("成人票:");
		scanf(" %d",&a);
		
		printf("兒童、老人票:");
		scanf(" %d",&b);
		
		c=a*300+b*50;
		printf("應付金額:%d\n",c);
		
		printf("\n是否離開(y/n):");
		scanf(" %c",&input);		
	}
	
	return 0;
}
