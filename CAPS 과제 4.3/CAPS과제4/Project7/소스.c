#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h; //����
	int d; //��,��

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &h);

	printf("���Ƕ�̵��� ��� 1, ���Ƕ�̵��� ��� 2�� �Է��ϼ��� : ");
	scanf("%d", &d);

	int a; //��
	int b; //��ĭ
	int c; //��


	if (d == 1) //���Ƕ�̵�
	{
		for (a = 1; a <= h; a++) //��  
		{
			for (b = 1; b <= h - a; b++) //��ĭ
				printf(" ");
			for (c = 1; c <= 2 * a - 1; c++)  //��
				printf("*");
			printf("\n");
		}
	}


	else if (d == 2) //���Ƕ�̵�
	{
		for (a = h; a >= 1; a--)//��  
		{
			for (b = 1; b <= h - a; b++) //��ĭ
				printf(" ");
			for (c = 1; c <= 2 * a - 1; c++)  //��
				printf("*");
			printf("\n");
		}
	}

	return 0;
}