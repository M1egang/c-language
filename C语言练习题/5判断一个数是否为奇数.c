#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("是奇数\n");
	else
		printf("不是奇数\n");

	return 0;
}