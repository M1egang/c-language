#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("请输入“我是宋晋帅儿子”，否则你的电脑将在1分钟后关机!\n");
	scanf("%s", input);
	while (1)
	{
		if (strcmp(input, "我是宋晋帅儿子")==0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}