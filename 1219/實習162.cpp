#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,*ptr;
	ptr=(int*)malloc(3*sizeof(int));
	printf("�п�J�Ĥ@�Ӽ�:");
	scanf("%d",&*ptr);
	printf("�п�J�ĤG�Ӽ�:");
	scanf("%d",&*(ptr+1));
	printf("�п�J�ĤT�Ӽ�:");
	scanf("%d",&*(ptr+2));
	
	for(i=0;i<3;i++)
		printf("��%d���Ƭ�%d\n",i+1,*(ptr+i));

	free(ptr);
	return 0;
} 
