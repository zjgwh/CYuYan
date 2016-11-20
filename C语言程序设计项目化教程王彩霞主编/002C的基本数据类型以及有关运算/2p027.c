#include <stdio.h>
void main()
{
	int x,y;           /*x和主在整个MIAN()的函数体内都有效*/
	x=10;y=20;         /*给X和Y赋值*/
	printf("x=%d,y=%d\n",x,y);  /*按指定形式输出X和Y的值*/
	{
	int t;                     /*临时定义变量T,T的作用范围仅限于本括号内*/
	t=x;x=y;y=t;               /*交换X和Y的值*/  
	}
	printf("x=%d,y=%d\n",x,y);   /*再次输出X和Y的值*/
}            /*注意上面的代码段,如果去掉中间的那对括号,则程序无法通过编译*/