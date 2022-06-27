#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y, int z)
{
	int m;
	m = x + y + z;
	return m;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%d%d%d", &num1, &num2, &num3);
	int sum = Add(num1, num2, num3);
	printf("%d\n",sum);
	return 0;
}