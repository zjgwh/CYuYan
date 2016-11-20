#include <stdio.h>
void main()
	{
	int age;                         /*定义变量AGE,它的类型为INT型*/
	printf ("请输入你的年龄=");      /*输出提示信息*/
	scanf("%d",&age);                /*停顿,等待从键盘输入整数,并送给AGE*/
	printf("你的年龄为%d,再过10年你就%d岁了\n",age,age+10);   /*L输出有关结果*/
	/*变量必须先定义后使用*/
	}