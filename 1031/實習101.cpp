#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input,result,carry=1,output=0;
	printf("請輸入十進位的數字:");
	scanf("%d",&input);
	while(input!=0)
	{
		result=input%2;
		input=input/2;
		output=output+carry*result;
		carry=carry*10;
	}
	printf("二進位=%d\n",output);
	system("pause");
	return 0;
} 
