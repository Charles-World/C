#define _CRT_SECURN_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//int a=1, b=2,c;
//c = a;
//a = b;
//b = c;
//printf("a=%d b=%d", a, b);
//system("pause");
//return 0;
//}

//
//int main()
//{
//	int a = 1, b = 2;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d", a, b);
//	system("pause");
//	return 0;
//}



int main()
{
	int a = 1, b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d", a, b);
	system("pause");
	return 0;
}

