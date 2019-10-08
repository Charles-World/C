#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

char *My_strcpy(char arr2[], const char arr[])
{
	assert(arr != NULL);
	assert(arr2 != NULL);

	char *ret = arr2;
	while (*arr2++ = *arr++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr[] = "abcdef";
	char arr2[] = { 0 };

	printf("%s\n", My_strcpy(arr2, arr));

	system("pause");
	return 0;
}