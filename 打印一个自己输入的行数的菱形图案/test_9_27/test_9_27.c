#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	int i = 0, j = 0, k = 0;
	scanf("%d", &a);
	for (k = 0; k < a; k++)
	{
		for (i = 1; i < a-k; i++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*k+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (k = 0; k < a-1; k++)
	{
		for (i = 0; i <= k; i++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(a-1-k)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}