#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("===== �C�ֶ��ʲ��B =====\n");
	printf("���H:300 �ൣ�B�ѤH:50\n");
	
	int a,b,c;
	char input='n';
	
	while(input!='y')
	{
		printf("���H��:");
		scanf(" %d",&a);
		
		printf("�ൣ�B�ѤH��:");
		scanf(" %d",&b);
		
		c=a*300+b*50;
		printf("���I���B:%d\n",c);
		
		printf("\n�O�_���}(y/n):");
		scanf(" %c",&input);		
	}
	
	return 0;
}
