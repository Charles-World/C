#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void empty (int arr[], int a)
{
	int i;
	for (i = 0; i < a; i++)
	{
		arr[i] = 0;
	}
}
void init(int arr[], int a)
{
	int i;
	for (i = 0; i < a; i++)
	{
		scanf("%d,", &arr[i]);
	}
}
void reverse(int arr[], int a)
{
	int i, j, k[10];
	for (i = 0; i < a; i++)
	{
		k[9 - i] = arr[i];
	}
	for (j = 0; j < 10; j++)
	{
		arr[j] = k[j];
	}
}
int main()
{
	int arr[10], i, j, k = 10;
	empty(arr, k);
	init(arr, k);
	for (i = 0; i < 10; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n");
	reverse(arr, k);
	for (i = 0; i < 10; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}