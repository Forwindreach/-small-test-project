#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define number 80
int main()
{
	short a, b;
	short num;
	int renshu[number];
	short bunpu[11] = { 0 };

	printf("������ѧ������\n");

	do {
		scanf("%d", &num);
		if (num < 1 || num>number)
			printf("�����ƣ�����������\n");
	} while (num < 1 || num>number);

	printf("������%d�˵ĳɼ�\n",num);

	for (a = 0; a < num; a++) {
		printf("%2d��", a + 1);
		do {
			scanf("%d", &renshu[a]);
			if (renshu[a] < 0 || renshu[a]>100)
				printf("�ɼ�������100��\n");

		} while (renshu[a] < 0 || renshu[a]>100);
		bunpu[renshu[a] / 10]++;

	}
	puts("---�ֲ�ͼ---");
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
