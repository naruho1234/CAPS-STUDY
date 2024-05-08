#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int H, M;

	scanf("%d %d", &H, &M);

	if (M >= 45)
		printf("%d %d", H, M - 45);
	else
	{
		H = H - 1;
		M = M + 15;

		if (H < 0)
			H = 23;
		
		printf("%d %d", H, M);
	}
		

	return 0;
}