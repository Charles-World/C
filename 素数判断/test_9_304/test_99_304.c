#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int prime(int a)
{
	int i;
	for (i = 2; i <= sqrt(a); i++)
	{
		if (0 == a % i)
		{
			break;
		}
	}
	if (i > sqrt(a))
	{
		return 1;
	}
}
int main()
{
	int a, b;
	scanf("%d", &a);
	b = prime(a);
	if (1 == b)
	{
		printf("这个数是素数\n");
	}
	else
	{
		printf("这个数不是素数\n");
	}
	system("pause");
	return 0;
}