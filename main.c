#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int main(void)
{
	int a;
	scanf("%d", &a);//�ٸ�����a=1234
	int m;
	int sum = 0;
	m = a;//m=1234
	while (m)//m�ڵ��Ĵ�Ϊ0��ѭ��������Ϊm������0,����ѭ���Ĵν���
	{
		sum = sum * 10 + m % 10;//��һ�ε�ʽΪsum=0*10+1234%10(��ʵֵ����4)=4���ڶ��ε�ʽΪsum=4*10+123%10(��ʵֵΪ3)=43�������ε�ʽΪsum=43*10+12%10(��ʵֵΪ2)=432,���Ĵ�sum=432*10+1%10(��ʵΪ1)=4321
		m /= 10; // m = m/10,��һ�ε�ʽΪm=1234/10=123���ڶ���m=123/10=12��������m=12/10=1,���Ĵ�m=1/10=0;
	}
	if (sum == a)
		printf("�ǻ�����!\n");
	else
		printf("���ǻ�����\n");//1234!=4321���Բ��ǻ�����
	system("pause");
	return 0;
}