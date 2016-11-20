
#include <stdio.h>
void main()
{
	int t,a,b;
	printf("请输入第一个整数:");
	scanf("%d",&a); 
	printf("请输入第二个整数:");
	scanf("%d",&b); 
	printf("交换前A和B的值为%d,%d\n",a,b);
	t=a,a=b,b=t;
	printf("交换后A和B的值为%d,%d\n",a,b);
}