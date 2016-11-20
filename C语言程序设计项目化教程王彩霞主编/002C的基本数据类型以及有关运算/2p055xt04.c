#include<stdio.h>
void main()
{
	char x;      /*定义一个CHAR型 变量X,以便接受一个字符*/
	int t,a;
	printf("请输入一个小写字母:");
	scanf("%c",&x);   /*从键盘输入一个字符(假定此处输入的肯定是小写字母)*/
	a=x;
	(a>=97 &&a<=122)?(t=a-32):(t=a);
	printf("你输入的如果为小写字母转换为大写,其他不转换,你输入的为:%c\n",t);
}