#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
int main()
{
	int i;
	char ch;
	for (i = 0; ; i++)
	{
		scanf("%c",&ch);
		if (ch >= 65 && ch < 91)
		{
			ch = ch + 32;
			printf("%c", ch);
		}
		else if (ch >= 97 && ch < 123)
		{
			ch = ch - 32;
			printf("%c", ch);
		}
		else if (ch >= 48 && ch < 58)
		{
			continue;
		}
		else
		{
			printf("%c", ch);
		}

	}
	system("pause");
	return 0;
}