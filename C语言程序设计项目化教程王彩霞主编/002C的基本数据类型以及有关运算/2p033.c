#include<stdio.h>
void main()
{
	char x;      /*定义一个CHAR型 变量X,以便接受一个字符*/
	printf("请输入一个小写字母:");
	scanf("%c",&x);   /*从键盘输入一个字符(假定此处输入的肯定是小写字母)*/
	printf("你输入的小写字母为%c,其ASCII码为%d,对应的大写字母为%c\n",x,x,x-32);
}