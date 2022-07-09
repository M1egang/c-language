#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void digui(char*str)
{
	char tmp = *str;
	int len = count(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (count(str + 1) >= 2)
		digui(str + 1);
	*(str+len-1)=tmp;
}
int main()
{
	char arr[] = "abcdef";
	digui(arr);
	printf("%s\n", arr);
	return 0;
}