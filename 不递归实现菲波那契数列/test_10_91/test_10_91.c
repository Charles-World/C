#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int fac(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fac(n - 1) + fac(n - 2);
//	}
//}
//int main()
//{
//	int n, ret;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
int main()
{
	int n,i;
	int a = 1;
	int b = 1;
	int c = 1;
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("%d", c);
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			c = a + b;
			b = a;
			a = c;
		}
		printf("%d\n", c);
	}
	system("pause");
	return 0;
}