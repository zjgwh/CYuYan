#include <stdio.h>
void main()
{
	float a,b,max;
	printf("�����һ����:");
	scanf("%f",&a);
	printf("����ڶ�����:");
	scanf("%f",&b);
	max=(a>b?a:b);
    printf("����:%.3f\n",max);
}