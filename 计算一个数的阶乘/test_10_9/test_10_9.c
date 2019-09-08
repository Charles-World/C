#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	ret = fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
int main()
{
	int a, i, b, sum = 1;
	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		b = a - i;
		sum = sum * b;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}