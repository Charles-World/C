#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	int i,j,count=0;

	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= sqrt(i); j++)
			if (i % j == 0)
				break;
			if (j > sqrt(i))
			{
				count++;
				printf("%d,", i);
			}
	}
	printf("\ncount = %d\n", count);
	
	system("pause");
	return 0;
}