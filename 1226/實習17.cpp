#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize  50   /* 堆疊大小 */
int stack[MaxSize];   /* 全域陣列、佇列 */
int top=0;           /* 全域變數、堆疊指標 */

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
	//使用者輸入 
	printf("請輸入字串:");
	char str[100]={'\0'};
	scanf("%s",&str);
	
	//掃過整個字串
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
			push(str[i]);
		else if(str[i]==')')
		{
			if(pop()!='(')
			{
				printf("此字串括號()不合法\n");
				break;
			}
		}
		else if(str[i]==']')
		{
			if(pop()!='[')
			{
				printf("此字串括號[]不合法\n");
				break;
			}
		}
		else if(str[i]=='}')
		{
			if(pop()!='{')
			{
				printf("此字串括號{}不合法\n");
				break;
			}
		}
		i++;
	} 
	//確認是否有單獨左括號在stack中
	if(i==strlen(str)&&empty()!=0)
		printf("合法\n");
	else if(empty()==0)
		printf("此字串有多餘的左括號\n");
	return 0;
}
