#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[10], b[10], c[10], i, j, t;
	for (i = 0; i < 10; i++)
	{
		scanf("%d,", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		scanf("%d,", &b[i]);
	}
	for (i = 0; i < 10; i++)
	{
		c[i] = a[i];
	}
	for (i = 0; i < 10; i++)
	{
		a[i] = b[i];
	}
	for (i = 0; i < 10; i++)
	{
		b[i] = c[i];
	}
	for (i = 0; i < 10; i++)
	{
		printf("%2d\n", a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%2d\n ", b[i]);
	}
	system("pause");
	return 0;
}