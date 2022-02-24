#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char *str1,const char *str)
{
	;
	assert(*str1 != NULL);
	char* parr = str1;
	while (*str1++ = *str++)
	{
		;

		
	}
	return parr;
	
}
int main()
{

	char arr[] = "               ";
	char arr2[] = "hello bit";
	
	printf("%s", my_strcpy(arr, arr2));


	return 0;
}