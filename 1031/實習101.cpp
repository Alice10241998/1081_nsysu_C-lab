#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input,result,carry=1,output=0;
	printf("�п�J�Q�i�쪺�Ʀr:");
	scanf("%d",&input);
	while(input!=0)
	{
		result=input%2;
		input=input/2;
		output=output+carry*result;
		carry=carry*10;
	}
	printf("�G�i��=%d\n",output);
	system("pause");
	return 0;
} 
