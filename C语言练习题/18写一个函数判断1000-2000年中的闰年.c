#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
		return 1;
}
int main()
{
	int n = 0;
	for (n = 1000; n <= 2000; n++)
	{
		if (year(n) == 1)
		{
			printf("%d", n);
		}
	}
	return 0;
}