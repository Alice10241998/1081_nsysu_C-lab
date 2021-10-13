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
	//1.判斷堆疊是否為空
	if(empty())
		printf("堆疊為空\n");
	else
		printf("堆疊不為空\n");
		
	int i,input,output;
	
	//2.push 5筆使用者輸入資料進入堆疊
	printf("\n輸入五個數字: ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&input);
		push(input);
	}
	
	//3.判斷堆疊是否為滿
	if(full())
		printf("\n堆疊為滿\n\n");
	else
		printf("\n堆疊不為滿\n\n");
		
	//4.並依序 pop 出來。在螢幕上出現 pop 出來的資料。 
	printf("pop: ");
	for(i=0;i<5;i++)
	{
		output=pop();
		printf("%d ",output);
	}
	
	//5.判斷堆疊是否為空
	if(empty())
		printf("\n\n堆疊為空\n");
	else
		printf("\n\n堆疊不為空\n");	
		
	return 0;
} 
