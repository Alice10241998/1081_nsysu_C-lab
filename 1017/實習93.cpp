#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double raw,percent,year,type;
	
	printf("����:");
	scanf("%lf",&raw);
	printf("�~�Q�v(%):");
	scanf("%lf",&percent);
	printf("�ƧQ�p���W�v(1:�C�~�@���B2):");
	scanf("%lf",&year);
	printf("�~��(�H�~�����):");
	scanf("%lf",&type);
	
	printf("�̲��`���B:%lf",raw*pow((100+percent)/100.0,year*type));
	printf("�Ȩ����B:%lf",)
}
