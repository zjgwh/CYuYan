#include<stdio.h>

void main()
{
int x,y;
printf("�������һ������:");    /*��PRINTF��������ʾ��Ϣ*/
scanf("%d",&x);             /*��SCANF������һ������,���Ѹ� �����͸�X*/
printf("�������һ������:");
scanf("%d",&y);
printf("���������������Ϊ:%d��%d\n���Ϊ:%d\n",x,y,x+y);
printf("���Ϊ:%d\n",x-y);
printf("���Ϊ:%d\n",x*y);
}