
#include <stdio.h>
void main()
{
	int t,a,b;
	printf("�������һ������:");
	scanf("%d",&a); 
	printf("������ڶ�������:");
	scanf("%d",&b); 
	printf("����ǰA��B��ֵΪ%d,%d\n",a,b);
	t=a,a=b,b=t;
	printf("������A��B��ֵΪ%d,%d\n",a,b);
}