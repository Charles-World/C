#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count_one_bits(unsigned int num)
{
	//int n = 0;
	//int m = 0;
	//int count = 0;

	//while (num)
	//{
	//	if (1 == num - (num / 2) * 2)
	//	{
	//		count++;
	//	}
	//	num = num / 2;
	//}
	//return count;

	int i = 0;
	int j = 0;
	int count = 0;

	for (i = 0; i < 32; i++)
	{
		if (1 == (num & 1))
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}
int main()
{
	int num = 0;
	int ret = 0;

	scanf("%d", &num);
	ret = count_one_bits(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}