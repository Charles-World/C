#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int year(int a)
{
	if ((0 == a % 4 && 0 != a % 100) || 0 == a % 400)
	{
		return 1;
	}
}
int main()
{
	int a, b;
	scanf("%d", &a);
	b = year(a);
	if (1 == b)
	{
		printf("���꣺%d\n", a);
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}