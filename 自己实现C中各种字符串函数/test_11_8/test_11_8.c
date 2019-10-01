#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

size_t my_strlen(const char *arr)
{
	assert(arr != NULL);
    size_t ret = 0;

	while (*arr++ != '\0')
	{
		ret++;
	}
	return ret;
}

char *my_strcpy(char *arr2, const char *arr)
{
	assert(arr2 != NULL);
	assert(arr != NULL);
	char *ret = arr2;

	while (*arr2++ = *arr++)
	{
		;
	}
	return ret;
}

char *my_strcat(char *arr, const char *arr3)
{
	assert(arr != NULL);
	assert(arr3 != NULL);
	char *ret = arr;

	while (*arr != '\0')
	{
		arr++;
	}
	while (*arr++ = *arr3++)
	{
		;
	}
	return ret;
}

int my_strcmp(const char *arr2, const char *arr3)
{
	assert(arr2 != NULL);
	assert(arr3 != NULL);

	while (*arr2 != '\0' && *arr3 != '\0')
	{
		if (*arr2 < *arr3)
		{
			return -1;
		}
		else if (*arr2 > *arr3)
		{
			return 1;
		}
	}

	if (*arr2 != '\0')
	{
		return -1;
	}
	else if (*arr3 != '\0')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

char *my_strncpy(char *arr, const char *arr2, size_t n)
{
	assert(arr != NULL);
	assert(arr2 != NULL);
	size_t count = 0;
	char *ret = arr;

	while (count < n)
	{
		*arr = *arr2;
		arr++;
		arr2++;
		count++;
	}
	return ret;
}

char *my_strncat(char *arr4, const char *arr3, size_t n)
{
	assert(arr4 != NULL);
	assert(arr3 != NULL);
	size_t count = 0;
	char *ret = arr4;

	while (*arr4 != '\0')
	{
		arr4++;
	}

	while (count < n)
	{
		*arr4 = *arr3;
		arr4++;
		arr3++;
		count++;
	}
	return ret;
}

int my_strncmp(const char *arr4, const char *arr3, size_t n)
{
	assert(arr4 != NULL);
	assert(arr3 != NULL);
	size_t count = 0;

	while (count < n)
	{
		if (*arr4 < *arr3)
		{
			return -1;
		}
		else if (*arr4 > *arr3)
		{
			return 1;
		}
		count++;
	}
	return 0;
}

char *my_strstr(const char *arr, const char *arr3)
{
	assert(arr != NULL);
	assert(arr3 != NULL);
	char *a = (char *)arr;
	char *b = (char *)arr3;

	for (; *a != '\0'; a++)
	{
		if (0 == strcmp(a,arr3))
		{
			return a;
		}
	}
	return NULL;
}

void *my_memcpy(void *arr4, const void *arr, size_t num)
{
	assert(arr4 != NULL);
	assert(arr != NULL);
	void *ret = arr4;

	while (num--)
	{
		*(char *)arr4 = *(char *)arr;
		arr4 = (char*)arr4 + 1;
		arr = (char*)arr + 1;
	}
	return ret;
}

void *my_memmove(void *arr4, const char *arr, size_t num)
{
	assert(arr4 != NULL);
	assert(arr != NULL);
	void *ret = arr4;

	if (arr4 <= arr || (char*)arr4 >= ((char*)arr + num))
	{
		while (num--)
		{
			*(char*)arr4 = *(char*)arr;
			arr4 = (char*)arr4 + 1;
			arr = (char*)arr + 1;
		}
	}
	else
	{
		arr4 = (char*)arr4 + num - 1;
		arr = (char*)arr + num - 1;

		while (num--)
		{
			*(char*)arr4 = *(char*)arr;
			arr4 = (char*)arr4 - 1;
			arr = (char*)arr - 1;
		}
	}
	return ret;
}

int main()
{
	char arr[100] = "abcdefi";
	char arr2[100] = { 0 };
	char arr3[100] = "fi";
	char arr4[100] = { 0 };

	printf("%lu\n", my_strlen(arr));
	printf("%s\n", my_strcpy(arr2, arr));
	printf("%s\n", my_strcat(arr, arr3));
	printf("%d\n", my_strcmp(arr2, arr3));
	printf("%s\n", my_strncpy(arr4, arr2, 3));
	printf("%s\n", my_strncat(arr4, arr3, 1));
	printf("%d\n", my_strncmp(arr4, arr3, 2));
	printf("%s\n", my_strstr(arr, arr3));
	printf("%s\n", my_memcpy(arr4, arr, 6));
	printf("%s\n", my_memmove(arr4, arr, 6));
	
	system("pause");
	return 0;
}