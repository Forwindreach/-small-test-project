#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{  
	int a = 1;
	double ndtz = 2;
	puts("��ӭʹ�ñ�׼���ؼ���\n");
	printf("�������������:\n");
	scanf("%d", &a);
	ndtz = ((double)a - 100) * 0.9;
	printf("���ı�׼�����ǣ�%f\n", ndtz);



	return 0;
}