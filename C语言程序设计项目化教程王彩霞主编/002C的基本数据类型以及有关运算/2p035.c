#include <stdio.h>
void main()
{
	char x,y;
	printf("请输入第一个字符:");
	x=getchar();getchar();
	printf("请输入第二个字符:");
	y=getchar();
	printf("你输入的两个字符分别为%c和%c,再见!\n",x,y);
}