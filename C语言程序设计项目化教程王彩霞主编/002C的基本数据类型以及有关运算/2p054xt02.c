
#include <stdio.h>
void main()
{
	int x,y;
	printf("请输入第一个整数:");
	scanf("%d",&x); 
	printf("请输入第二个整数:");
	scanf("%d",&y); 
	printf("输入两个数的和为%d\n",x+y);
	printf("输入两个数的差为%d\n",x-y);
	printf("输入两个数的积为%d\n",x*y);
	printf("输入两个数的除数为%d\n",x/y);
	printf("输入两个数的相除的余数为%d\n",x%y);
}