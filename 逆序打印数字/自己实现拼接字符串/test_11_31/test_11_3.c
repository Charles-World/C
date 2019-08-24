#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

char *My_strcat(char *arr2, const char *arr)
{
	assert(arr2 != NULL);
	assert(arr != NULL);

	char *ret = arr2;
	int num = 0;

	num = strlen(arr2);
	arr2 += num;
	while (*arr2++ = *arr++)
	{
		;
	}

	return ret;
}

int main()
{
	char arr[] = "ghijkl";
	char arr2[13] = "abcdef";

	printf("%s\n", My_strcat(arr2, arr));

	system("pause");
	return 0;
}