#pragma once
#include <stdio.h>

//int Partion(int *arr, int left, int right)
//{
//	int pivot = arr[right];
//
//	while (left < right)
//	{
//		while (left < right && arr[left] <= pivot)
//		{
//			left++;
//		}
//
//		arr[right] = arr[left];
//		while (left < right && arr[right] >= pivot)
//		{
//			right--;
//		}
//
//		arr[left] = arr[right];
//	}
//
//	arr[left] = pivot;
//	return left;
//}

//int Partion2(int *arr, int left, int right)
//{
//	int div = left;
//
//	for (int i = left; i < right; i++)
//	{
//		if (arr[i] < arr[right])
//		{
//			int tmp = arr[div];
//			arr[div] = arr[i];
//			arr[i] = tmp;
//			div++;
//		}
//	}
//	int tmp = arr[div];
//	arr[div] = arr[right];
//	arr[right] = tmp;
//
//	return div;
//}
void Print(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void Swap(int *a, int *b) {
	int t = *a; *a = *b; *b = t;
}


// ��������
// ���ܱ�֤ left һ���� 0
//����
int Partion_1(int array[], int left, int right) {
	int begin = left;	// ��Ҫд�� begin = 0;
	int end = right;	// end ������ right - 1������ { 1��2, 3, 4 }

	while (begin < end) {
		// ��׼ֵ���ұߣ��������
		// ������ { 1, 7, 8, 4 }
		// array[begin] �� array[right] �Ƚϱ����� ==
		// ���� { 1, 1, 1 }
		while (begin < end && array[begin] <= array[right]) {
			begin++;
		}
		// ��ζ�� array[begin] > array[right]

		while (begin < end && array[end] >= array[right]) {
			end--;
		}
		// ��ζ�� array[end] < array[right]

		Swap(array + begin, array + end);
	}

	// ��ζ�����䱻�ֳ� 3 �ݣ��ֱ��� { С �� �� ��׼ֵ }
	Swap(array + begin, array + right);

	// ���ص�ǰ��׼ֵ�����±�
	return begin;
}
//����
//int Partion_2(int array[], int left, int right) {
//	int begin = left;
//	int end = right;
//	int pivot = array[right];
//
//	while (begin < end) {
//		while (begin < end && array[begin] <= pivot) {
//			begin++;
//		}
//
//		array[end] = array[begin];
//
//		while (begin < end && array[end] >= pivot) {
//			end--;
//		}
//
//		array[begin] = array[end];
//	}
//
//	array[begin] = pivot;
//
//	return begin;
//}

//����
int Partion_3(int array[], int left, int right) {
	int d = left;
	for (int i = left; i < right; i++) {
		if (array[i] < array[right]) {
			Swap(array + i, array + d);
			d++;
		}
	}

	Swap(array + d, array + right);
	return d;
}
//

//// array[left, right]
//void __QuickSort(int array[], int left, int right) {
//	if (left == right) {
//		// ������ֻ��һ����
//		return;
//	}
//
//	if (left > right) {
//		// ������û����
//		return;
//	}
//
//	// ��׼ֵ�� array[right]
//	int div;	// �����������ջ�׼ֵ���ڵ��±�
//	div = Partion_1(array, left, right);	// ���� array[left, right]
//											// ��С�ķ��󣬴�ķ���
//											// ��������׼ֵ���ڵ��±�
//											// ���䱻�ֳ� 
//											// [left, div - 1] �Ȼ�׼ֵС	*
//											// [div, div]	   ��׼ֵ		�Ѿ�������λ��
//											// [div + 1, right] �Ȼ�׼ֵ��	*
//	__QuickSort(array, left, div - 1);
//	__QuickSort(array, div + 1, right);
//}
//
//void QuickSort(int array[], int size) {
//	__QuickSort(array, 0, size - 1);
//}
//
void QuickSort(int *arr, int left, int right)
{
	if (left >= right)
	{
		return;
	}

	int div = Partion_3(arr, left, right);

	QuickSort(arr, left, div -  1);
	QuickSort(arr, div + 1, right);
}