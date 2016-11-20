#include <stdio.h>
void main()
{
short int x=32765,y;  //X和Y是SHORT INT型,它的存储范围(-32768,32767)
int z;               //Z是INT型,它的存储范围(-2147483648,2147483647)
y=x+9,z=x+9;
printf("x=%hd,y=%hd,z=%d\n,x,y,z");
}