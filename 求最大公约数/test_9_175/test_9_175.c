#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int  i, j,t;
	scanf("%d",&i);
	scanf("%d",&j);
	if (i < j)
	{
		t = i;
		i = j;
		j = t;
	}
	for (t = j; t > 0; t--)
		if (i%t == 0 && j%t == 0)
		{
			printf("最大公约数=%d\n", t);
			break;
		}
	system("pause");
	return 0;
}