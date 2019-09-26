#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Search(int arr[5][5], int n)
{
	int i = 0;
	int left = 0;
	int right = 4;
	int mid = 0;

	for (i = 0; i < 5; i++)
	{
		left = 0;
		right = 4;
		while (left <= right)
		{
			mid = left + ((right - left) / 2);
			if (arr[i][mid] > n)
			{
				right = mid - 1;
			}
			else if (arr[i][mid] < n)
			{
				left = mid + 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	int arr[][5] = { {1, 3, 6, 7, 8},
					 {2, 5, 9, 10, 13},
					 {3, 6, 11, 15, 16},
					 {4, 7, 14, 18, 19},
					 {5, 9, 15, 21, 27}, };
	int n = 0;
	int ret = 0;

	scanf("%d", &n);
	ret = Search(arr, n);
	if (0 == ret)
	{
		printf("没有此数字\n");
	}
	else if(1 == ret)
	{
		printf("存在此数字\n");
	}

	system("pause");
	return 0;
}