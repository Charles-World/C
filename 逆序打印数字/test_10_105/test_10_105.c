#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int a)
{
	if (a > 9)
	{
	    print(a / 10);
	}
	printf("%d\n", a % 10);
}
int main()
{
	int a;
	scanf("%d", &a);
	print(a);
	system("pause");
	return 0;
}