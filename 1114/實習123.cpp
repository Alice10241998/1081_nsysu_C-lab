#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int input;
	char data[100];
	
	printf("�q�T���t��\n");
	printf("1. �s�W���\n");
	printf("2. ��ܥ������\n");
	printf("3. ����\n");
	
	while(input!=3)
	{
		FILE *fp = fopen("output.txt","a");
		printf("�п��:");
		scanf("%d",&input);
		fflush(stdin);
		
		if(input==1)
		{
			printf("�п�J �Ǹ� �m�W �q�� :"); 
			fgets(data,sizeof(data),stdin);
			fputs(data,fp);
			printf("��J����\n");
		}
		
		if(input==2)
		{
			system("type output.txt");
		}
		fclose(fp);

	}
	printf("�����t��\n");
	 
}
