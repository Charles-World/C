#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int com(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int arr[] = { 1, 4, 3, 6, 2, 0 };
	int i = 0;
	qsort(arr, 6, sizeof(int), com);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}

	system("pause");
	return 0;
}

