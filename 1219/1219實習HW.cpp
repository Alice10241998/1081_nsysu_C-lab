#include<stdio.h>
#include<stdlib.h>

struct listnode
{
	int val;
	struct listnode *next;
};

int main()
{
	int input;
	struct listnode *first=NULL,*last=NULL;
	printf("1.計算長度\n2.插入節點\n3.刪除節點\n4.顯示所有節點\n5.結束程式\n");
	
	while(1)
	{
		printf("請選擇 :");
		scanf("%d",&input);
		
		if(input==5)
			break;
			
		else if(input==1)
		{
			if(first==NULL)
				printf("長度:0\n");
			else
			{
				int len=0;
				struct listnode *ptr;
				for(ptr=first;ptr!=NULL;ptr=ptr->next)
					len++;
				printf("長度:%d\n",len);
			}
		}
			
		else if(input==2)
		{
			int n;
			struct listnode *in=(struct listnode *)malloc(sizeof(struct listnode));
			printf("輸入:");
			scanf("%d",&n);
			if(first==NULL)
			{
				in->val=n;
				in->next=NULL;
				first=in;
				last=in;
			}
			else
			{
				in->val=n;
				in->next=NULL;
				last->next=in;
				last=in;
			}
		}
			
		else if(input==3)
		{
			if(first==last)
			{
				first=NULL;
				last=NULL;
			}
			else
			{
				struct listnode *ptr=last,*in;
				for(in=first;in->next!=last;in=in->next);
				in->next=NULL;
				last=in;
				free(ptr);
			}
		}
		
		else if(input==4)
		{
			if(first!=NULL)
			{
				struct listnode *ptr;
				for(ptr=first;ptr!=NULL;ptr=ptr->next)
					printf("%d",ptr->val);
				printf("\n");
			}
			else
				printf("\nIt is empty.\n");
		}
	}
	return 0;
}
