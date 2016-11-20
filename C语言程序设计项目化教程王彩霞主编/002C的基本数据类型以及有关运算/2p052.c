
#include <stdio.h>
void main()
{
	int x;
	float y;
	unsigned z;
	printf("请输入:");
	scanf("%4d %6f %3u",&x,&y,&z);  //格式中指定了截取长度
	printf("x=%d,y=%.2f,z=%u\n",x,y,z);
}