#include<stdio.h>
#include<stdlib.h>
#define MaxSize  10   /* 佇列大小 */
int queue[MaxSize];   /* 全域陣列、佇列 */
int head=0;           /* 全域變數、指向開頭資料的指標 */
int tail=0;           /* 全域變數、指向尾端資料的指標 */

int inqueue(int n)
{
   if((tail+1)% MaxSize != head) 
   {
      queue[tail] = n;
      tail++;
      tail = tail % MaxSize;
      return 0;
   }
   else 
      return -1;
} 

int dequeue()
{
   if (tail != head)
   {
      int n = queue[head];
      queue[head]=0;
      head++;
      head = head % MaxSize;
      printf("dequeue %d\n",n);
	  return n;
   }
   else
   {
   		printf("Queue 已空\n");
   		return 0;
   }
} 

void print()
{
	int i;
	printf("佇列內容 :");
	for(i=0;i<MaxSize;i++)
		printf("%d ",queue[i]);
	printf("\n");
}

int main()
{
	print();
	inqueue(1);
	inqueue(2);
	inqueue(3);
	inqueue(4);
	inqueue(5);
	print();
	dequeue();
	dequeue();
	dequeue();
	print();
	
	return 0;
}
