#include<stdio.h>
#include<stdlib.h>

struct node{int data;struct node *prev;};

struct node *front=NULL,*back=NULL;

void inqueue(int value)
{
	struct node *new;
	new=malloc(sizeof(struct node));
	new->data=value;
	new->prev=NULL;
	
	if(front==NULL)
	{
		front=new;
		back=new;
		return;	
	}
	
	back->prev=new;
	back=new;
}

int dequeue()
{
	if(front==NULL)
	{
		printf("empty\n\n");
		return -1;
	}
	
	struct node *current,*temp;
	int value;
	value=front->data;
	temp=front;
	
	if(front==back)
		front=back=NULL;

	else
	{
		temp=front;
		front=front->prev;
	}
	free(temp);
	return value;
}

int main()
{
	struct node *point;
	int input,num,de;
	printf("1.�s�W�@�����\n2.�R���@�����\n3.�^�Ǧ�C�e�ݤ���\n4.�����{��\n");
	while(1)
	{
		printf("�п��:");
		scanf("%d",&input);
		
		if(input==4)
			break;
		if(input==1)
		{
			printf("�п�J�Ʀr:");
			scanf("%d",&num);
			inqueue(num);
			point=front;
			printf("\n");
			while(point!=NULL)
			{
				printf("%d ",point->data);
				point=point->prev;
			}
			printf("\n\n");
		}
		if(input==2)
		{
			de=dequeue();
			if(de==-1)
				printf("empty\n");
				
			else
			{
				point=front;
				printf("\n%d has been dequeued\n\n",de);
			
				if(!front)
				printf("empty\n");
			
				while(point!=NULL)
				{
					printf("%d ",point->data);
					point=point->prev;
				}
				printf("\n\n");
			}
		}
		if(input==3)
		{
			if(front==NULL)
				printf("\nempty\n\n");
			else
				printf("\n%d\n\n",front->data);
		}
	} 
}
