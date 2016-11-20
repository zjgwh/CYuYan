#include <stdio.h>
void main()
{
	int x;
	float y;
	unsigned z;
	printf("请输入:");
	scanf("%d%f%u",&x,&y,&z);  //执行一次给三个变量赋值
	printf("x=%d,y=%.2f,z=%u\n",x,y,z);
}