#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//void revserse(int a[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		while ((left < right) && (a[left] % 2 != 0))
//		{
//			left++;
//		}
//		while ((left < right) && (a[right] % 2) == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = a[left];
//			a[left] = a[right];
//			a[right] = temp;
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1, 2,3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	revserse(a, sizeof(a) / sizeof(a[0]));
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

void find(int a[3][3], int row, int col, int k, int * px, int *py)
{
	//从右上角开始找
	int i = 0;
	int j = col - 1;
	while ((i < row) && (j >= 0))
	{
		//如果找到k的值，保存k所表示的值的位置
		if (a[i][j] == k)
		{
			*px = i;
			*py = j;
			break;
		}
		//如果当前什小于k，向左走
		else if (a[i][j] < k)
		{
			i++;
		}
		else
		{
			//如果当前值大于k，向左走
			j--;
		}
		*px = -1;
		*py = -1;
	}
}

//从右上角开始找，递归
//int search(int a[3][3], int row, int col, int k, int x, int y, int *px, int *py)
//{
//	//出口
//	if ((x >= row) || (y < 0))
//	{
//		//如果返回值为0，表示没有找到
//		return 0;
//	}
//	if (a[x][y] == k)
//	{
//		*px = x;
//		*py = y;
//		//如果返回值为1，表示找到
//		return 1;
//	}
//	else if (a[x][y] > k)
//	{
//		//如果当前值大于k，向左走，找更小的值
//		return search(a, row, col, k, x, y - 1, px, py);
//	}
//	else
//	{
//		//如果当前值小于k，向下走，找更大的值
//		return search(a, row, col, k, x + 1, y, px, py);
//	}
//}

//int search(int a[3][3], int row, int col, int k, int x, int y, int *px, int *py)
//{
//	if ((x < 0) || (y >= col))
//	{
//		return 0;
//	}
//	if (a[x][y] == k)
//	{
//		*px = x;
//		*py = y;
//		return 1;
//	}
//	else if (a[x][y] > k)
//	{
//		return search(a, row, col, k, x - 1, y, px, py);
//	}
//	else
//	{
//		return search(a, row, col, k, x, y + 1, px, py);
//	}
//}

int main()
{
	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int px = 0;
	int py = 0;

	find(a, 3, 3, 5, &px, &py);
	printf("%d, %d\n", px, py);
	//search(a, 3, 3, 9, 2, 0, &px, &py);
	//printf("%d, %d\n", px, py);

	system("pause");
   	return 0;
}