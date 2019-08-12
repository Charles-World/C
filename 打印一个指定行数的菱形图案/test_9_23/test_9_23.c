#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, j, k;
	int a[] = { '*','*','*','*','*','*','*','*','*','*','*','*','*' };
	int b[] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	int c[] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	i = 7;
	j = 7;
	while(i >= 0 && j < 13)
	{
		b[i] = a[i];
		b[j] = a[j];
		for (k = 0; k < 13; k++)
		{
			printf("%c", b[k]);
		}
		printf("\n");
		i--;
		j++;
	}
	while (i <= 7 && j >= 7)
	{
		b[i] = c[i];
		b[j] = c[j];
		for (k = 0; k < 13; k++)
		{
			printf("%c", b[k]);
		}
		printf("\n");
		i++;
		j--;
	}
	system("pause");
	return 0;
}