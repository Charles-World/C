#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 9999; i++)
	{
		int e = i, count = 1;
		double sum = 0;
		while (e / 10)
		{
			count++;
			e = e / 10;
		}
		e = i;
		while(e)
		{
			sum += pow(e % 10, count);
			e = e / 10;
		}
		if (i == sum)
			printf("%d\n", i);
	}

	system("pause");
	return 0;
}