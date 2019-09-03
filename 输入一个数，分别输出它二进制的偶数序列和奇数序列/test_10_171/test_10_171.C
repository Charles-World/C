#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void two(int n)
{
	//int num = 0;

	//if (n >= 1)
	//{
	//	num = n - ((n / 2) * 2);
	//	two(n / 2);
	//}
	//if (0 != n)
	//{
	//		printf("%d", num);
	//}
	int arr[32] = { 0 };
	int i = 0;
	int j = 0;

	for (i = 0; i <  32; i++)
	{
		arr[i] = n & 1;
		n = n >> 1;
	}
	printf("二进制为:>\n");
	for (i = 0; i < 32; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	printf("偶数序列为:>");
		for (i = 0; i < 32; i+=2)
		{
			printf("%d", arr[i]);
		}
		printf("\n");
		printf("奇数序列为:>");
		for (i = 1; i < 32; i += 2)
		{
			printf("%d", arr[i]);
		}
		printf("\n");
}

int main()
{
	int n = 0;

	scanf("%d", &n);
	two(n);
	system("pause");
	return 0;
}