#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];      /*����һ���ַ���*/
	int t;
	printf("�������������:");
	//scanf("%s",&name);
	gets(name);   /*�Ӽ�������һ���ַ���*/
	t=strcmp(name,"Ҧ��");
	t=0 ? printf("Ҧ�����㳤�����!") : printf("%s����л��Ĳ���!\n",name);
}