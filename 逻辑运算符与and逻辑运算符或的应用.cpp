#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a = 1;
	puts("欢迎使用季节计算器");
	puts("请输入你想查询的月份：");
	scanf("%d", &a);
	if (a >= 3 && a <= 5)//如果加上；会被识别为空语句
		printf("%d月是春季\n", a);
	else if (a >= 6 && a <= 8)//嵌套结构
		printf("%d月是夏季", a);
	else if (a >= 9 && a <= 11)//选择与运算符，符号两边都满足(不为0)则判断结果为1，结果类型为int
		printf("%d月是秋季\n");
	else if (a == 12 || a == 1 || a == 2)//选择或运算符，符号两边任意满足（不为0)一边则判断结果为1，结果类型为int
		printf("%d月是冬季\n", a);
	else//若以上嵌套结构中所有判断均不为1，则运行该行结果
		printf("该月份不存在\n");


	return 0;
}