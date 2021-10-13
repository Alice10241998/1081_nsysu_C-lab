#include<stdio.h>
#include<stdlib.h>
#define MaxSize  10   /* ��C�j�p */
int queue[MaxSize];   /* ����}�C�B��C */
int head=0;           /* �����ܼơB���V�}�Y��ƪ����� */
int tail=0;           /* �����ܼơB���V���ݸ�ƪ����� */

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
   		printf("Queue �w��\n");
   		return 0;
   }
} 

void print()
{
	int i;
	printf("��C���e :");
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
