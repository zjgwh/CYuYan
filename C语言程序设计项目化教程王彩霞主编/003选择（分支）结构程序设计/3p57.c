#include<stdio.h>
#include<math.h>
#define S (a+b+c)/2  //为了书写方便,定义大写的符号常量S,代表(a+b+c)/2)
void main()
{
	float a,b,c,area;   //定义变量分别代表三角形的三边长和面积
	printf("请输入第一条边的长度=");  //提示输入边长
	scanf("%f",&a);
	printf("请输入第二条边的长度=");  //提示输入边长
	scanf("%f",&b);
	printf("请输入第三条边的长度=");  //提示输入边长
	scanf("%f",&c);
	area=sqrt(S*(S-a)*(S-b)*(S-c));   //sqrt()函数能得到一个数的算术平方根,送给变量AREA
	printf("三角形的边长分别为%.2f,%.2f,%.2f,面积=%.2f\n",a,b,c,area);  //输出结果
}

