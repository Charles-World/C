#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int z_strlen(char arr[])
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return z_strlen(arr + 1) + 1;
//	}
//}
//int main()
//{
//	char arr[10], ret;
//	scanf("%s", arr);
//	ret = z_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
int main()
{
	char arr[10];
	int i = 0, ret, count = 0;
	scanf("%s", arr);
	while (arr[i] != '\0')
	{
		i++;
		count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}