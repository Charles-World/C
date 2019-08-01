#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int fun (int a[], int key, int right)
{
	int left = 0, mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (a[mid] > key)
		{
			right = mid - 1;
		}
		else if (a[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
		    return mid;
		}
	}
	return -1;
}
int main()
{
	int num, count, k;
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12 };
	scanf("%d", &num);
	count = sizeof (a) / sizeof (a[0]) - 1;
	k = fun (a, num, count);
	if (-1 == k)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了\n");
	}
	system("pause");
	return 0;
}