#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("�����롰�����ν�˧���ӡ���������ĵ��Խ���1���Ӻ�ػ�!\n");
	scanf("%s", input);
	while (1)
	{
		if (strcmp(input, "�����ν�˧����")==0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}