#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Find(int *arr, int sz, int *p1, int *p2)
{
	int num = 0;
	int i = 0;
	int count = 0;

	for (i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}
    
	while (1 != (num & 1))
	{
		num >>= 1;
		count++;
	}

	for (i = 0; i < sz; i++)
	{
		if (1 == ((arr[i] >> count) & 1))
		{
			*p1 ^= arr[i];
		}
		else
		{
			*p2 ^= arr[i];
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 4, 5, 6, 5, 4, 2, 9, 1 };
	int p1 = 0;
	int p2 = 0;
	int sz = 0;

	sz = sizeof(arr) / sizeof(arr[0]);
	Find(arr, sz, &p1, &p2);
	printf("p1 = %d\np2 = %d\n", p1, p2);

	system("pause");
	return 0;
}