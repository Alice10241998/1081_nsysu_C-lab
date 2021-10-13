#include<stdio.h>
#include<stdlib.h>
#define MaxSize  7   /* 堆疊大小 */
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
	int k;
	if(top>0)
	{
		top--;
		k=stack[top];
		stack[top]=0;
		printf("pop %d\n",k);
		return k;
	}
	else
	{
		printf("Stack is empty.\n");
		return 0;
	}
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
void print()
{
	int i;
	printf("堆疊內容:button ");
	for(i=0;i<MaxSize;i++)
		printf("%d ",stack[i]);
	printf("top\n");
}
int main()
{
	print();
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	print();
	pop();
	pop();
	pop();
	print();
	
	return 0;
}
