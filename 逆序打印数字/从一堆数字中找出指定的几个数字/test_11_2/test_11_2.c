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
	//�����Ͻǿ�ʼ��
	int i = 0;
	int j = col - 1;
	while ((i < row) && (j >= 0))
	{
		//����ҵ�k��ֵ������k����ʾ��ֵ��λ��
		if (a[i][j] == k)
		{
			*px = i;
			*py = j;
			break;
		}
		//�����ǰʲС��k��������
		else if (a[i][j] < k)
		{
			i++;
		}
		else
		{
			//�����ǰֵ����k��������
			j--;
		}
		*px = -1;
		*py = -1;
	}
}

//�����Ͻǿ�ʼ�ң��ݹ�
//int search(int a[3][3], int row, int col, int k, int x, int y, int *px, int *py)
//{
//	//����
//	if ((x >= row) || (y < 0))
//	{
//		//�������ֵΪ0����ʾû���ҵ�
//		return 0;
//	}
//	if (a[x][y] == k)
//	{
//		*px = x;
//		*py = y;
//		//�������ֵΪ1����ʾ�ҵ�
//		return 1;
//	}
//	else if (a[x][y] > k)
//	{
//		//�����ǰֵ����k�������ߣ��Ҹ�С��ֵ
//		return search(a, row, col, k, x, y - 1, px, py);
//	}
//	else
//	{
//		//�����ǰֵС��k�������ߣ��Ҹ����ֵ
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