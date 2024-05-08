#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h; //높이
	int d; //정,역

	printf("높이를 입력하세요 : ");
	scanf("%d", &h);

	printf("정피라미드일 경우 1, 역피라미드일 경우 2를 입력하세요 : ");
	scanf("%d", &d);

	int a; //행
	int b; //빈칸
	int c; //별


	if (d == 1) //정피라미드
	{
		for (a = 1; a <= h; a++) //행  
		{
			for (b = 1; b <= h - a; b++) //빈칸
				printf(" ");
			for (c = 1; c <= 2 * a - 1; c++)  //별
				printf("*");
			printf("\n");
		}
	}


	else if (d == 2) //역피라미드
	{
		for (a = h; a >= 1; a--)//행  
		{
			for (b = 1; b <= h - a; b++) //빈칸
				printf(" ");
			for (c = 1; c <= 2 * a - 1; c++)  //별
				printf("*");
			printf("\n");
		}
	}

	return 0;
}