#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	while (1) // 1은 true 라는 뜻
	{
		int a, b; //두개의 정수

		printf("두개의 정수를 입력하시오 : ");
		scanf("%d %d", &a, & b);

		printf("연산을 선택하시오(+, -, *, /) : ");
		
		char c; //연산

		scanf(" %c", &c);

		if (c == '!')
		{
			printf("프로그램을 종료합니다");
			break;  //!일때 종료
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
				printf("나눗셈 연산을 할 수 없습니다\n"); //b가 0일때
			}
			else
			{
				printf("%d\n", a / b);  //b가 0이 아닐때
			}

		}
		else
		{
			printf("잘못된 연산자입니다\n");
		}


		


	}
}