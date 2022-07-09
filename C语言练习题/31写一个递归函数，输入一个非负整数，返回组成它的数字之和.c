#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ssum(int n)
{

	if (n > 9)
	{
		return ssum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int sum = ssum(num);
	printf("%d\n", sum);
	return 0;
}