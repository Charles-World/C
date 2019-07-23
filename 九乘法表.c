#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void product(int nn)
{
	int i, j, k;
	for (i = 1; i <= nn; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %2d ", j, i, j * i);
		}
		printf("\n");
	}
}
int main()
{
	int nn;
	scanf("%d", &nn);
	product(nn);
	system("pause");
	return 0;
}