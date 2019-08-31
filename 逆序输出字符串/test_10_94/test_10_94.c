#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void reverse_string(char arr[], int sz)
{
	if (sz < 0)
	{
		return;
	}
	else
	{
		printf("%c", arr[sz]);
		reverse_string(arr, sz - 1);
	}
}
int main()
{
	int arr[10], ret, sz;
	scanf("%s", arr);
	sz = (sizeof(arr)) / (sizeof(arr[0])) - 1;
	reverse_string(arr, sz);
	printf("\n");
	system("pause");
	return 0;
}