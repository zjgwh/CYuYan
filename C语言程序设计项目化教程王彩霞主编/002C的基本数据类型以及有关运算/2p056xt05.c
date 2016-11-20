#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];      /*定义一个字符串*/
	int t;
	printf("请输入你的名字:");
	//scanf("%s",&name);
	gets(name);   /*从键盘输入一个字符串*/
	t=strcmp(name,"姚明");
	t=0 ? printf("姚明，你长得真高!") : printf("%s，感谢你的参与!\n",name);
}