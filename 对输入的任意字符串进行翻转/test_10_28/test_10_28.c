#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//unsigned int reverse_bit(unsigned int n)
//{
//	int sum = 0;
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		sum += ((n >> i) & 1) * pow(2, 31 - i);//获取每一位翻转之后的值
//		                                       //然后每一位的值相加
//	}
//
//	return sum;
//}
//
//
//unsigned int reverse_bit2(unsigned int n)
//{
//	unsigned ret = 0;
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		ret <<= 1;             //ret左移，让当前位的值左移一次
//		ret |= (n >> i) & 1; //当前们的值与ret或运算，ret最后一位保存当前们的值
//	}
//
//	return ret;
//}
//int main()
//{
//	int n = 25;
//
//	printf("%u\n", reverse_bit(n));
//	printf("%u\n", reverse_bit2(n));
//
//
//	system("pause");
//	return 0;
//}

//int average(int a, int b)
//{
//	return a + ((b - a) >> 1);
//}
//
//int average3(int a, int b)
//{
//	return (a & b) + ((a ^ b) >> 1);
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	
//	printf("%d\n", average(a, b));
//	printf("%d\n", average3(a, b));
//
//	system("pause");
//	return 0;
//}

 // 一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的，求出那个数字

//int find(int a[],int len)
//{
//	int ret = 0;
//	int i = 0;
//
//	for (i = 0; i < len; i++)
//	{
//		ret ^= a[i];
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int a[] = { 1, 2, 6, 6, 7, 7, 10, 2, 1 };
//	int len = sizeof(a) / sizeof(a[0]);
//
//	printf("%d\n", find(a, len));
//
//	system("pause");
//	return 0;
//}

//第一步：字符串整体逆转
//第进二：以空格分割的子串逆转
//子串的起点和尾点：子串的头指针和尾指针
//定义函数：rever_str(char *start, char *end）

int my_strlen(char *str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}

void reverse_str(char *start, char *end)
{
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

void reverse(char *str)
{
	char *start = str;
	char *end = str + my_strlen(str) - 1;
	//子串的起始指针
	char *cur_start = str;
	//整体逆转一遍
	reverse_str(start, end);
	//局部子串逆转
	while(*cur_start)
	{
		char *start = cur_start;
		//寻找子串的尾点
		while ((*cur_start != ' ') && (*cur_start != '\0'))
		{
			cur_start++;
		}
		reverse_str(start, cur_start - 1);//逆转子串
		if (*cur_start == ' ')//获取下一个子串的起点
		{
			cur_start++;
		}
	}
}
int main()
{
	//char str[] = "student a am i";
	char str[100] = { 0 };

	gets(str);
	reverse(str);
	printf("%s\n", str);

	system("pause");
	return 0;
}