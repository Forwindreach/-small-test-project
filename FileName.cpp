#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{  
	int a = 1;
	double ndtz = 2;
	puts("欢迎使用标准体重计算\n");
	printf("请输入您的身高:\n");
	scanf("%d", &a);
	ndtz = ((double)a - 100) * 0.9;
	printf("您的标准体重是；%f\n", ndtz);



	return 0;
}