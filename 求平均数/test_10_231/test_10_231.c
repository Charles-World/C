#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int average(int a, int b)
{
	a = a - ((a - b) / 2);
	return a;
}

int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;

	scanf("%d%d", &a, &b);
	ret = average(a, b);
	printf("%d", ret);

	system("pause");
	return 0;
}