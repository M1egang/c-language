#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int i = 0;
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d\n", max);
	return 0;
}