
#include <stdio.h>
void main()
{
	int x;
	float y;
	unsigned z;
	printf("请输入:");
	scanf("%d,%f!%u#",&x,&y,&z);  //格式符号之间带有额外的符号,则额外的符号必须原样输入,且不再需要其他分隔符号
	printf("x=%d,y=%.2f,z=%u\n",x,y,z);
}