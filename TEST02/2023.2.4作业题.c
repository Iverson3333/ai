#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d\n,b=%d\n,c=%d\n", a, b, c);
//	return 0;
//}
//answer:a=-1;
//       b=-1;
//       c=255;
//2.int main()
//{
//	char a =-128;
//	printf("%u\n", a);
//	return 0;
//}
//aswer:4294967168
//3.int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//aswer:4294967168
//4.int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//aswer:-10
//5.int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//anwser9876543210...À¿—≠ª∑
//6.int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//7.unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//}
//
//	return 0;
//}
//À¿—≠ª∑¥Ú”°hello world