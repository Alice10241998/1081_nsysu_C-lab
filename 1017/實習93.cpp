#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double raw,percent,year,type;
	
	printf("本金:");
	scanf("%lf",&raw);
	printf("年利率(%):");
	scanf("%lf",&percent);
	printf("複利計算頻率(1:每年一次、2):");
	scanf("%lf",&year);
	printf("年期(以年為單位):");
	scanf("%lf",&type);
	
	printf("最終總金額:%lf",raw*pow((100+percent)/100.0,year*type));
	printf("賺取金額:%lf",)
}
