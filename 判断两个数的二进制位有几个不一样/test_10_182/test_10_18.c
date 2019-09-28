#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DifferentCount(int m, int n)
{
	int a = 0;
	int count = 0;
	int i = 0;
	int num = 0;

	count = m ^ n;
	for (i = 0; i < 32; i++)
	{
		if (1 == (count & 1))
		{
			num++;
		}
		count = count >> 1;
	}
	return num;
}

int main()
{
	int m = 0;
	int n = 0;
	int ret = 0;

	scanf("%d%d", &m, &n);
	ret = DifferentCount(m, n);
	printf("%d\n", ret);

	system("pause");
	return 0;
}