#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define number 80
int main()
{
	short a, b;
	short num;
	int renshu[number];
	short bunpu[11] = { 0 };

	printf("请输入学生个数\n");

	do {
		scanf("%d", &num);
		if (num < 1 || num>number)
			printf("出限制，请重新输入\n");
	} while (num < 1 || num>number);

	printf("请输入%d人的成绩\n",num);

	for (a = 0; a < num; a++) {
		printf("%2d号", a + 1);
		do {
			scanf("%d", &renshu[a]);
			if (renshu[a] < 0 || renshu[a]>100)
				printf("成绩不超过100分\n");

		} while (renshu[a] < 0 || renshu[a]>100);
		bunpu[renshu[a] / 10]++;

	}
	puts("---分布图---");
	printf("    100;");

	for (b = 0;b < bunpu[10]; b++)
		putchar('*');
	putchar('\n');

	for (a = 9; a >= 0; a--) {
		printf("%3d -%3d:", a * 10, a * 10 + 9);
		for (b = 0; b < bunpu[a]; b++)
			putchar('*');
		putchar('\n');
	

	}



		return 0;
}
