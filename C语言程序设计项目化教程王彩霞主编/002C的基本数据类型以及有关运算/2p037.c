#include <stdio.h>
#include <string.h>   //�Ƚ������ַ����Ƿ���ȵĺ���
void main()
{
	char name[81];                 //�����ַ�������������80����Ч�ַ�
	int x;
	printf("�������������:");
	//scanf("%s",name);             //����SCANF��NAME��ֵ  
	
	gets(name);         //��SCANF("%s,NAME")������:GETS���Խ��ܿո�Ϳմ�,
	printf("���----%s\n",name);  //���NAME��ֵ

	x=strcmp(name,"����");
    printf("��ͬ��?0Ϊ��ͬ:\n%d",x);
}