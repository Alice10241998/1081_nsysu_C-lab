#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int input;
	char data[100];
	
	printf("通訊錄系統\n");
	printf("1. 新增資料\n");
	printf("2. 顯示全部資料\n");
	printf("3. 結束\n");
	
	while(input!=3)
	{
		FILE *fp = fopen("output.txt","a");
		printf("請選擇:");
		scanf("%d",&input);
		fflush(stdin);
		
		if(input==1)
		{
			printf("請輸入 學號 姓名 電話 :"); 
			fgets(data,sizeof(data),stdin);
			fputs(data,fp);
			printf("輸入結束\n");
		}
		
		if(input==2)
		{
			system("type output.txt");
		}
		fclose(fp);

	}
	printf("結束系統\n");
	 
}
