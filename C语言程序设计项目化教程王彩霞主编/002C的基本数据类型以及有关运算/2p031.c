#include<stdio.h>
#include<math.h>  //�˴���MATH.H������,�� ��䲻��ʡ��
void main()
{
	float x,sum;         //����FLOAT����X,������ʾ����,SUM��ʾ��Ϣ��
	int n;               //����INT����N,��ʾ������
	printf("���뱾��=");
	scanf("%f",&x);          //�˴����뱾��,���͸�����X
	printf("����������=");
	scanf("%d",&n);             //�˴�����������,���͸�����N
	sum=x*pow(1+0.0325,n);             //������ں�ı�Ϣ��,����д��SUM=X*POW(1.0325,N);
	printf("����Ϊ%fԪ,����%d���,�ܹ��õ���Ϣ%fԪ\n",x,n,sum-x);

}