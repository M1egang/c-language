#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int twofind(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid + 1;
		}
		else if (arr[mid] < k)
		{
			left = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = twofind(arr, k, sz);
	if (-1 == ret)
		printf("找不到\n");
	else
		printf("找到了，下标为：%d\n", ret);
	return 0;
}