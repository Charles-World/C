#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void swap(char arr[], int n)
{
	char arr2[5];
	int i = 0;

	for (i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	
	for (i = 0; i < 5; i++)
	{
		arr[i] = arr[n + i];
	}

	for (i = 0; i < n; i++)
	{
		 arr[5 - n + i] = arr2[i];
	}
}

int main()
{
	char arr[6] = "abcde";
	int n = 0;

	printf("%s\n", arr);
	printf("请输入要旋转的个数\n");
	scanf("%d", &n);
	swap(arr, n);
	printf("%s\n", arr);

	system("pause");
	return 0;
}