#include <stdio.h>
void main()
{
	//��������ֱ������NUM����������������G,S,B�ֱ�������λ ��ʮλ�Ͱ�λ�ϵ�����
	unsigned num,g,s,b;
	printf("������һ����������");
	scanf("%u",&num);            //ע��%U��UNSIGNED���͵ĸ�ʽ����
	g=num%10;                    //���NUM�ĸ�λ���͸�G
	s=num/10%10;               //���NUM��ʮλ���͸�S
	b=num/100%10;            //���NUM�İ�λ���͸�B
	printf("%u�ĸ�λ��ʮλ�Ͱ�λ�ϵ����ֱַ���%u��%u��%u\n",num,g,s,b);

}