#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

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
	char arr2[6] = "deabc";
	int n = 3;
	int i = 0;

	printf("%s\n", arr);
	printf("%s\n", arr2);
	swap(arr, n);	

	if (0 == strcmp(arr, arr2))
	{
		printf("���ַ�������ת����ַ���\n");
	}
	else
	{
		printf("���ַ���������ת����ַ���\n");
	}

	system("pause");
	return 0;
}