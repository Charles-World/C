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

	printf("%s\n", strcpy(arr2, arr));      //�ַ����������������ǽ�arr�е��ַ�������һ�ݵ�arr2��

	printf("%s\n", strcat(arr, arr3));      //�ַ���ƴ�Ӻ��������ǽ�arr3�е��ַ����ŵ�ɾ��/0��arr����

	printf("%s\n", strstr(arr, arr4));      //�ַ�������������������arr��Ѱ��arr4����ҵ��ˣ��ͷ�����arr4���Ǹ���ʼ
	printf("%s\n", strstr(arr, arr3));      //��ַ�����û���ҵ��ͷ���NULL

	printf("%s\n", strchr(arr, 'j'));       //�ַ��������������Ѱ�ҵ����Ǹ��ַ����ͷ��أ��Ǹ��ַ���һ�γ��ֵ��Ǹ�λ��
	printf("%s\n", strchr(arr, 'c'));       //�ĵ�ַ�����û���ҵ����ͷ���NULL

	printf("%d\n", strcmp(arr, arr5));      //�ַ����ȽϺ��������ֵ�ʽ�ķ�ʽ�Ƚ��ַ�����С�����arr > arr5������һ��������
	printf("%d\n", strcmp(arr, arr));       //���arr < arr5������һ�������������Ⱦͷ���0
	printf("%d\n", strcmp(arr5, arr));

	memcpy(arr, arr5, 4);                   //�����ַ����ĺ��������һ�������룬Ҫ���Ƶ��ֽ�����ֱ������arr5���׵�ַ�ʹ�arr���׵�ַ
	printf("%s\n", arr);                    //��ʼ��ֵ

	memmove(arr + 3, arr + 1 , 3);          //�͵�û���ص�ʱ��memcpy��ͬ�������ص��ڴ�ʱ���˺������Ȱ��ص��Ĳ����ƶ���Ŀ�����飬�ٶ�
	printf("%s\n", arr);                    //Դ������и���

	system("pause");
	return 0;
}