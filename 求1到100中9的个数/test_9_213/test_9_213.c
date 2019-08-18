#define CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, count = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
		printf("count = %d\n", count);
	system("pause");
	return 0;
}
