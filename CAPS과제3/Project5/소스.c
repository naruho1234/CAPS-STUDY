#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	while (1) // 1�� true ��� ��
	{
		int a, b; //�ΰ��� ����

		printf("�ΰ��� ������ �Է��Ͻÿ� : ");
		scanf("%d %d", &a, & b);

		printf("������ �����Ͻÿ�(+, -, *, /) : ");
		
		char c; //����

		scanf(" %c", &c);

		if (c == '!')
		{
			printf("���α׷��� �����մϴ�");
			break;  //!�϶� ����
		}

		if (c == '+')  //+
		{
			printf("%d\n", a + b);

		}
		else if (c == '-') //-
		{
			printf("%d\n", a - b);

		}
		else if (c == '*') //*
		{
			printf("%d\n", a * b);

		}
		else if (c == '/') // /
		{
			if (b == 0)
			{
				printf("������ ������ �� �� �����ϴ�\n"); //b�� 0�϶�
			}
			else
			{
				printf("%d\n", a / b);  //b�� 0�� �ƴҶ�
			}

		}
		else
		{
			printf("�߸��� �������Դϴ�\n");
		}


		


	}
}