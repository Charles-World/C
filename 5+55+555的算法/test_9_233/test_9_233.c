#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, Sn, b, i;
	scanf("%d", &a);
	b = 0;
	Sn = 0;
	for (i = 0; i < 5 ; i++)
	{
		b = b * 10 + a;
		Sn = Sn + b;
	}
	printf("%d\n", Sn);
	/*b = a * 10 + a;
	c = b * 10 + a;
	d = c * 10 + a;
	e = d * 10 + a;*/
	system("pause");
	return 0;
}