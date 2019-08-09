#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
int a, b, c;
scanf("%d", &a);
scanf("%d", &b);
while (c = a % b)
{
	b = c;
	a = b;
}
printf("%d\n", b);
system("pause");
return 0;
}