#include<stdio.h>
void main()
{
int x,y;
printf("���һ������:");    /*��PRINTF��������ʾ��Ϣ*/
scanf("%d",&x);             /*��SCANF������һ������,���Ѹ� �����͸�X*/
printf("�������һ������:");
scanf("%d",&y);
printf("���������������Ϊ%d,%d,��Ϊ:%d",x,y,x+y);
}