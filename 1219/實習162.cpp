#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,*ptr;
	ptr=(int*)malloc(3*sizeof(int));
	printf("請輸入第一個數:");
	scanf("%d",&*ptr);
	printf("請輸入第二個數:");
	scanf("%d",&*(ptr+1));
	printf("請輸入第三個數:");
	scanf("%d",&*(ptr+2));
	
	for(i=0;i<3;i++)
		printf("第%d的數為%d\n",i+1,*(ptr+i));

	free(ptr);
	return 0;
} 
