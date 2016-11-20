#include<stdio.h>
void main()
{
	float x=1234567899.7865,z=56.76437899;  //float型数据有效数字6~7位
	double y=12345678987654321999.8756;    //double型数据有效数字15~16位
	printf("x=%f\ny=%f\n\nz=%f",x,y,z);
	printf("\nx+20=%f\ny+300=%f\n",x+20,y+300);
}