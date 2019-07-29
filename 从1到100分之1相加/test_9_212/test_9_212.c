#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	float i, j, a, b=0;
	for (i = 1; i < 101; i++)
	{
		a = (pow(-1, i + 1))*(1 / i);
		b = b + a;
	}
	printf("%f\n", b);
	system("pause");
	return 0;
}