#include<stdio.h>

void main()
{
float x,y;                        /*��������ʵ��,Ҳ���Ǵ�С�������*/
printf("�������һ��ʵ��:");    /*��PRINTF��������ʾ��Ϣ*/
scanf("%f",&x);                         /*��SCANF������һ������,���Ѹ� �����͸�X*/
printf("������ڶ���ʵ��:");
scanf("%f",&y);
printf("�����������ʵ��Ϊ:%f��%f\n���Ϊ:%f\n",x,y,x+y);
printf("���Ϊ:%f\n",x-y);
printf("���Ϊ:%f\n",x*y);
}