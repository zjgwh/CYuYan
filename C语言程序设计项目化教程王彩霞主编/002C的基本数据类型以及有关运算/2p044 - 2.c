#include <stdio.h>
void main()
{
int age;
printf("输入你的年龄:");
scanf("%d",&age);
age>18 ? printf("你是成年人\n") : printf("你有点小\n");//注意条件运算符的应用
}