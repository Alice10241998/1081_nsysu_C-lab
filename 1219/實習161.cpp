#include<stdio.h>
#include<stdlib.h>

struct student
{
	int math,eng;
	char name[3];
	float avg;
};

void score(struct student a[])
{
	int i;
	for(i=0;i<3;i++)
		printf("%d.%s平均%.2lf分\n",i+1,a[i].name,a[i].avg);
}

int main()
{
	int i;
	struct student a[3];
	for(i=0;i<3;i++)
	{
		printf("請輸入姓名:");
		scanf("%s",&a[i].name);
		printf("請輸入數學成績:");
		scanf("%d",&a[i].math);
		printf("請輸入英文成績:");
		scanf("%d",&a[i].eng);
		a[i].avg=float(a[i].math+a[i].eng)/2;
	}
	
	score(a);
	return 0;
}
