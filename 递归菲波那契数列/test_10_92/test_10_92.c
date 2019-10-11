#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
float fac(float n, float k)
{
	float i;
	if (0 == k)
	{
		return 1;
	}
	else if (1 == k)
	{
		return n;
	}
	else if (k > 1)
	{
		return n * fac(n, k - 1);
	}
	else
	{
		k = (-k);
		return (1 / n) *(1 / fac(n, k - 1));
	}
}
int main()
{
	float ret, n, k;
	scanf("%f", &n);
	scanf("%f", &k);
	ret = fac(n, k);
	printf("%f\n", ret);
	system("pause");
	return 0;
}