#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[11],a,i;
	char F;
	
	scanf("%c",&F);
	
	if(((int)F<65)||((int)F>72))
	{
		printf("�L��\n");
		return 0;
	} 

	num[0]=((int)F-55)/10;
	num[1]=((int)F-55)%10;
	
	for(i=2;i<11;i++)
	{
		scanf("%d",&a);
		num[i]=a;
	}

	if((num[2]!=1)&&num[2]!=2)
	{
		printf("��J�榡���~�A�r����Ĥ@��Ʀr���� 1 �� 2 ");
		return 0;
	}
	
	else if((num[0]*1+num[1]*9+num[2]*8+num[3]*7+num[4]*6+num[5]*5+num[6]*4+num[7]*3+num[8]*2+num[9]*1+num[10]*1)%10!=0)
	{ 
		printf("�L��\n");
		return 0;
	} 
	
	else
	{
		printf("����\n");
	}

	system("pause");
	return 0;
	
}
