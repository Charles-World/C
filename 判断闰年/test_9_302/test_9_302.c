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
		printf("闰年：%d\n", a);
	}
	else
	{
		printf("不是闰年\n");
	}
	system("pause");
	return 0;
}