#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A[1001] = { 0 };
	int B[1001] = { 0 };

	int a, b;

	scanf("%d %d", &a, &b);

	int i;
	for (i = 1; i <= a; i++)
	{
		if ((a % i) == 0)
			A[i] = i;
	}
	for (i = 1; i <= a; i++)
	{
		if ((b % i) == 0)
			B[i] = i;
	}
	int min;

	min = b;

	if (b > a)
		min = a;
	
	int GCD = 0;

	for (i = 1; i <=min; i++)
	{
		if (A[i] == B[i])
		{
			if (A[i] != 0)
				GCD = i;
		}

			//lcm
	}

	int LCM = 0;
	

	if (GCD == 1)
	{
		LCM = a * b;
	}
	else
	{
		LCM = GCD * (a / GCD) * (b / GCD);
	}

	printf("최대공약수 : %d\n", GCD);
	printf("최소공배수 : %d", LCM);

}