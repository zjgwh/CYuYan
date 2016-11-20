#include <stdio.h>
void main()
{
	float a,b,max;
	printf("输入第一个数:");
	scanf("%f",&a);
	printf("输入第二个数:");
	scanf("%f",&b);
	max=(a>b?a:b);
    printf("大数:%.3f\n",max);
}