#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char a[20] = {0};

	for(i = 0; i < 3; i++)
	{
		scanf("%s", a);
		if (0 == strcmp(a, "123456"))
		{
			break;
		}
		else
		{
			printf("密码错误,请重新输入\n");
		}
	}
	if (i < 3)
	{
		printf("密码正确\n");
	}
	else
	{
		printf("因为连续三次密码错误，退出程序！");
	}

	system("pause");
	return 0;
}