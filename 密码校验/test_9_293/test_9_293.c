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
			printf("�������,����������\n");
		}
	}
	if (i < 3)
	{
		printf("������ȷ\n");
	}
	else
	{
		printf("��Ϊ����������������˳�����");
	}

	system("pause");
	return 0;
}