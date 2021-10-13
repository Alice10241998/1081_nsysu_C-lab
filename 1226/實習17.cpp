#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize  50   /* ���|�j�p */
int stack[MaxSize];   /* ����}�C�B��C */
int top=0;           /* �����ܼơB���|���� */

int push(int n)
{
	if(top<MaxSize)
	{
		stack[top]=n;
		top++;
		return 0;
	}
	else
		return -1;
} 
int pop()
{
	char k;
	if(top>0)
	{
		top--;
		k=stack[top];
		stack[top]=0;
		return k;
	}
	else
		return 0;
}
int empty()
{
	if(top==0)
		return -1;
	else
		return 0;	
} 
int full()
{
	if(top==MaxSize)
		return 1;
	else
		return 0;
}

int main()
{
	//�ϥΪ̿�J 
	printf("�п�J�r��:");
	char str[100]={'\0'};
	scanf("%s",&str);
	
	//���L��Ӧr��
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
			push(str[i]);
		else if(str[i]==')')
		{
			if(pop()!='(')
			{
				printf("���r��A��()���X�k\n");
				break;
			}
		}
		else if(str[i]==']')
		{
			if(pop()!='[')
			{
				printf("���r��A��[]���X�k\n");
				break;
			}
		}
		else if(str[i]=='}')
		{
			if(pop()!='{')
			{
				printf("���r��A��{}���X�k\n");
				break;
			}
		}
		i++;
	} 
	//�T�{�O�_����W���A���bstack��
	if(i==strlen(str)&&empty()!=0)
		printf("�X�k\n");
	else if(empty()==0)
		printf("���r�꦳�h�l�����A��\n");
	return 0;
}
