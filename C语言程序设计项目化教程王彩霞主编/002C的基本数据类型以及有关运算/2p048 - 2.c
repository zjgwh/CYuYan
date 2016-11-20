#include <stdio.h>
void main()
{
	float x=24.5;
	int y=12;
	printf("x=%d,y=%f\n",x,y);  //该语句用错了格式符号,所以对应的结果不正确
	printf("x=%.1f,y=%d\n",x,y);   //该语句的格式符号应用正确
}