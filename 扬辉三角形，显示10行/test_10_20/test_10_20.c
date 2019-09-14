#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define Num 10

YHtriangle()
{
	int arr[Num][Num] = { 0 };
	int i = 0;
	int j = 0;

	for (i = 0; i < Num; i++)
	{
			arr[i][0] = 1;
	}
	for (i = 1; i < Num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < Num; i++)
	{
		for (j = 0; j < 2 * (Num - i); j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	YHtriangle();

	system("pause");
	return 0;
}