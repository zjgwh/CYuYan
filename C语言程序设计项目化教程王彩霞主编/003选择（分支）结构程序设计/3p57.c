#include<stdio.h>
#include<math.h>
#define S (a+b+c)/2  //Ϊ����д����,�����д�ķ��ų���S,����(a+b+c)/2)
void main()
{
	float a,b,c,area;   //��������ֱ���������ε����߳������
	printf("�������һ���ߵĳ���=");  //��ʾ����߳�
	scanf("%f",&a);
	printf("������ڶ����ߵĳ���=");  //��ʾ����߳�
	scanf("%f",&b);
	printf("������������ߵĳ���=");  //��ʾ����߳�
	scanf("%f",&c);
	area=sqrt(S*(S-a)*(S-b)*(S-c));   //sqrt()�����ܵõ�һ����������ƽ����,�͸�����AREA
	printf("�����εı߳��ֱ�Ϊ%.2f,%.2f,%.2f,���=%.2f\n",a,b,c,area);  //������
}

