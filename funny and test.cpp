#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	puts("你是1还是0");
	scanf("%d", &a);
	
	switch (a) {
	case 1: puts("哈哈哈哈，你是1？"); break;
	case 0: puts("哈哈哈哈，你承认了"); break;
	case 3:puts("这是一个测试");//无break语句时，程序会落到下一条语句上。
	case 4:puts("also a test"); break;
	default:puts("欸有，挺倔强哦"); puts("please stop"); break;
	}

	puts("please print a number b");
	scanf("%d", &b);
	puts("please print a number c");
	scanf("%d", &c);
	switch (b) {
	case 1: puts("b=1"); break;
	case 2: puts("b=2"); break;
	case 3: puts("b=3"); break;
	default:if (c == 4)
		c = 9;
		printf("%d", c);



	}


	return 0;
}