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
		printf("%d.%s����%.2lf��\n",i+1,a[i].name,a[i].avg);
}

int main()
{
	int i;
	struct student a[3];
	for(i=0;i<3;i++)
	{
		printf("�п�J�m�W:");
		scanf("%s",&a[i].name);
		printf("�п�J�ƾǦ��Z:");
		scanf("%d",&a[i].math);
		printf("�п�J�^�妨�Z:");
		scanf("%d",&a[i].eng);
		a[i].avg=float(a[i].math+a[i].eng)/2;
	}
	
	score(a);
	return 0;
}
