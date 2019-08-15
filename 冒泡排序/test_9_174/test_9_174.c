#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3], i, j, t;
	for (i = 0; i < 3; i++)
		scanf("%d,", &a[i]);
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2-i; j++)
			if (a[j] < a[j + 1])
			{
				t = a[i];
				a[i] = a[j + 1];
				a[j + 1] = t;
			}
	for (i = 0; i < 3; i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}