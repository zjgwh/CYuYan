#include <stdio.h>
void main()
{
	int x;
	printf("请输入一个整数:");
	scanf("%4d",&x);  //从数据中截取4位数字,送给变量x
	printf("x=%d\n",x);
}