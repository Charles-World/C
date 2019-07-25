#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

unsigned int Release_bit(unsigned int n)
{
	int i = 0;
	int ret = 0;
	int arr[32] = { 0 };

	for (i = 31; i >= 0; i--)
	{
		arr[i] = (n & 1);
		n = n >> 1;
	}

	for (i = 0; i < 32;i++)
	{
		arr[i] = (arr[i]) << i;
		ret = (ret | arr[i]);
	}

	return ret;
	//for (i = 0; i < 32; i++)//方法二
	//{
	//	ret = ret << 1;
	//	num = (value & 1);
	//	ret = (ret | num);
	//	value = (value >> 1);
	//}
	//return ret;
}

int main()
{
	int n = 0;
	int ret = 0;

	scanf("%d", &n);
	ret = Release_bit(n);
	printf("%u", ret);  //这里必须写成%u表示无符号十进制

	system("pause");
	return 0;
}