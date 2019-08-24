#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap(int* x, int* y)
{
	int a;
	a = *x;
	*x = *y;
	*y = a;
}
int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	swap(&a, &b);
	printf("a = %d,b = %d\n", a, b);
	system("pause");
	return 0;
}