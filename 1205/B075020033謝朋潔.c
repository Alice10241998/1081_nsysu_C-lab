#include<stdio.h>
#include<stdlib.h>
#define Max 5

int stack[Max];
int top=0;

int push(int n)
{
	if(top<Max)
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
	int k;
	if(top>0)
	{
		top--;
		k=stack[top];
		return k;
	}
	else
		return -1;
}

int empty()
{
	if(top==0)
		return 1;
	else
		return 0;
}

int full()
{
	if(top==Max)
		return 1;
	else
		return 0;
}

int main()
{
	//1.�P�_���|�O�_����
	if(empty())
		printf("���|����\n");
	else
		printf("���|������\n");
		
	int i,input,output;
	
	//2.push 5���ϥΪ̿�J��ƶi�J���|
	printf("\n��J���ӼƦr: ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&input);
		push(input);
	}
	
	//3.�P�_���|�O�_����
	if(full())
		printf("\n���|����\n\n");
	else
		printf("\n���|������\n\n");
		
	//4.�ȩ̀� pop �X�ӡC�b�ù��W�X�{ pop �X�Ӫ���ơC 
	printf("pop: ");
	for(i=0;i<5;i++)
	{
		output=pop();
		printf("%d ",output);
	}
	
	//5.�P�_���|�O�_����
	if(empty())
		printf("\n\n���|����\n");
	else
		printf("\n\n���|������\n");	
		
	return 0;
} 
