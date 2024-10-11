#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a, b;
	int i;
	puts("tell me the lenth of isosceles triangle");
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		for (b = 1; b <= a - i; b++)
			putchar(' ');
		for (b = 1; b <= i;b++)
			putchar('*');
		putchar('\n');
	}


	return 0;
}