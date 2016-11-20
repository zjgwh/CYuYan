#include <stdio.h>
void main()
{
	int x;
	printf("请输入一个整数:");
	scanf("x=%d#",&x);  //格式符号%D前面出现"X=",后面出现"#",这些符号必须从键盘输入
	printf("x=%d\n",x);
}