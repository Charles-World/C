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
//		sum += ((n >> i) & 1) * pow(2, 31 - i);//��ȡÿһλ��ת֮���ֵ
//		                                       //Ȼ��ÿһλ��ֵ���
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
//		ret <<= 1;             //ret���ƣ��õ�ǰλ��ֵ����һ��
//		ret |= (n >> i) & 1; //��ǰ�ǵ�ֵ��ret�����㣬ret���һλ���浱ǰ�ǵ�ֵ
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

 // һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵģ�����Ǹ�����

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

//��һ�����ַ���������ת
//�ڽ������Կո�ָ���Ӵ���ת
//�Ӵ�������β�㣺�Ӵ���ͷָ���βָ��
//���庯����rever_str(char *start, char *end��

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
	//�Ӵ�����ʼָ��
	char *cur_start = str;
	//������תһ��
	reverse_str(start, end);
	//�ֲ��Ӵ���ת
	while(*cur_start)
	{
		char *start = cur_start;
		//Ѱ���Ӵ���β��
		while ((*cur_start != ' ') && (*cur_start != '\0'))
		{
			cur_start++;
		}
		reverse_str(start, cur_start - 1);//��ת�Ӵ�
		if (*cur_start == ' ')//��ȡ��һ���Ӵ������
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