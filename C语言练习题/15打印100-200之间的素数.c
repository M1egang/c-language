#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i +=1)
	{
		int n = 0;
		for (n = 2; n < i; n++)
		{
			if (i % n == 0)
				break;
		}
		if (i == n)
			printf("%d", i);
	}
	return 0;
}