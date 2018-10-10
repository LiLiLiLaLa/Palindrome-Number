#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int main(void)
{
	int a;
	scanf("%d", &a);//举个例子a=1234
	int m;
	int sum = 0;
	m = a;//m=1234
	while (m)//m在第四次为0，循环的条件为m不等于0,所以循环四次结束
	{
		sum = sum * 10 + m % 10;//第一次等式为sum=0*10+1234%10(其实值就是4)=4，第二次等式为sum=4*10+123%10(其实值为3)=43，第三次等式为sum=43*10+12%10(其实值为2)=432,第四次sum=432*10+1%10(其实为1)=4321
		m /= 10; // m = m/10,第一次等式为m=1234/10=123，第二次m=123/10=12，第三次m=12/10=1,第四次m=1/10=0;
	}
	if (sum == a)
		printf("是回文数!\n");
	else
		printf("不是回文数\n");//1234!=4321所以不是回文数
	system("pause");
	return 0;
}