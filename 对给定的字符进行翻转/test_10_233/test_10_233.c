#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

//int my_strlen(const char arr[])
//{
//	int count = 0;
//	assert(arr);
//
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

void contrary(char left[], char right[])
{
	assert(left);
	assert(right);

	while (left < right)
	{
		char num = *left;
		*left = *right;
		*right = num;
		left++;
		right--;
	}
}

void swap(char a[], int sz)
{
	assert(a);
	/*int sz = 0;*/
	/*sz = my_strlen(a);*/
	char *left = a;
	char *left2 = a;
	char *right = a + sz - 2;
	contrary(left, right);
	while (*left2)
	{
		left = left2;
		while ((*left2 != ' ') && (*left2 != '\0'))
		{
			left2++;
		}
		right = left2 - 1;
		contrary(left, right);
		if (left2 != '\0')
		{
			left2++;
		}
	}

}

int main()
{
	char arr[] = "student a am i";
	int sz = sizeof(arr) / sizeof(arr[0]);

	swap(arr, sz);
	printf("%s", arr);
	printf("\n");

	system("pause");
	return 0;
}