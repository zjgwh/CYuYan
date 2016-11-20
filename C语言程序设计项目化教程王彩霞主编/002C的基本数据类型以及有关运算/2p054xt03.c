
#include <stdio.h>
void main()
{
	char a,b;
	int x,y;
	printf("请输入第一个字符:");
	scanf("%c",&a); x=a;
	getchar();
	printf("%c的ASCII码为:%d\n",a,x);
	
	printf("请输入第二个字符:");
	scanf("%c",&b); 
	y=b;
	printf("%c的ASCII码为:%d\n",b,y);

}