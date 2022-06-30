#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
prime(int x)
{
	int y=0;
	for(y=2;y<x;y++)
	{
		if (x % y == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (prime(i) == 1)
		{
			printf("%d", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}