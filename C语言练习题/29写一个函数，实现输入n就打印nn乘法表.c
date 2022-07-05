#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int print(int n)
{
	int a = 0;
	for (a = 1; a <= n; a++)
	{
		int b = 0;
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", a, b, a * b);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}