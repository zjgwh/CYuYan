
#include <stdio.h>
void main()
{
	int x;
	char name[40],y;
	float z;
	printf("������:");
	scanf("%d%s%f%c",&x,name,&z,&y);  //һ������������,��,С��,���ַ�
	printf("x=%d,name=%s,y=%c,z=%.2f\n",x,name,y,z);
}