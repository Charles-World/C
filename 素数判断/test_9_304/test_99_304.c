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
		printf("�����������\n");
	}
	else
	{
		printf("�������������\n");
	}
	system("pause");
	return 0;
}