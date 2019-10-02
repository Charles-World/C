#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "abcde";
	char arr2[100];
	char arr3[] = "fg";
	char arr4[] = "hi";
	char arr5[] = "jklmn";

	printf("%s\n", strcpy(arr2, arr));      //字符串拷备函数，就是将arr中的字符串复制一份到arr2中

	printf("%s\n", strcat(arr, arr3));      //字符串拼接函数，就是将arr3中的字符串放到删除/0的arr后面

	printf("%s\n", strstr(arr, arr4));      //字符串搜索函数，就是在arr中寻找arr4如果找到了，就返回那arr4的那个起始
	printf("%s\n", strstr(arr, arr3));      //地址，如果没有找到就返回NULL

	printf("%s\n", strchr(arr, 'j'));       //字符搜索函数，如果寻找到了那个字符，就返回，那个字符第一次出现的那个位置
	printf("%s\n", strchr(arr, 'c'));       //的地址，如果没有找到，就返回NULL

	printf("%d\n", strcmp(arr, arr5));      //字符串比较函数，按字典式的方式比较字符串大小，如果arr > arr5，返回一个正数，
	printf("%d\n", strcmp(arr, arr));       //如果arr < arr5，返回一个负数，如果相等就返回0
	printf("%d\n", strcmp(arr5, arr));

	memcpy(arr, arr5, 4);                   //复制字符串的函数，最后一个是输入，要复制的字节数，直接拿起arr5的首地址就从arr的首地址
	printf("%s\n", arr);                    //开始赋值

	memmove(arr + 3, arr + 1 , 3);          //和当没有重叠时和memcpy相同，当有重叠内存时，此函数是先把重叠的部分移动到目标数组，再对
	printf("%s\n", arr);                    //源数组进行复制

	system("pause");
	return 0;
}