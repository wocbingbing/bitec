#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(const char*str)
{
	int i = 0;
	while (*str)
	{
		str--;
		i++;
	}

	return i;
}
int main()
{

	char arr[] = "hello bit";
	printf("%d", my_strlen(arr));


	return 0;
}