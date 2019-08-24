#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Find(int n)
{
	int i = 0;
	int ret = 1;
	if (0 == n)
	{
		return 0;
	}
	else if (1 == n)
	{
		return 1;
	}
	else
	{
		for (i = 2; i <= n; i++)
		{
			ret += 2;
		}
		return ret;
	}
}

int main()
{
	int n = 4;
	int ret = 0;

	ret = Find(n);
	printf("%d\n", ret);

	system("pause");
	return 0;
}