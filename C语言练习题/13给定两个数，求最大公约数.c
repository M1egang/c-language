#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d%d", &a, &b);
	int max = (a > b ? a : b);
	while (1)
	{
	if (a % max == 0 && b % max == 0)
	{
		printf("���Լ��Ϊ%d\n", max);
		break;
	}
	max--;
	}
	return 0;
}