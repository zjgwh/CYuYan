#include<stdio.h>
#include<math.h>  //此处把MATH.H引进来,该 语句不能省略
void main()
{
	float x,sum;         //定义FLOAT变量X,用来表示本金,SUM表示本息和
	int n;               //定义INT变量N,表示存款年份
	printf("输入本金=");
	scanf("%f",&x);          //此处输入本金,并送给变量X
	printf("输入存款年数=");
	scanf("%d",&n);             //此处输入存款年数,并送给变量N
	sum=x*pow(1+0.0325,n);             //求出到期后的本息和,可以写成SUM=X*POW(1.0325,N);
	printf("本金为%f元,共存%d年后,总共得到利息%f元\n",x,n,sum-x);

}