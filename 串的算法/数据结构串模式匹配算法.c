#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//int Index(char arr1[], char arr2[]) {
//	int i = 1;
//	int j = 1;
//	while (i <= sizeof(arr1) && j <= sizeof(arr2))
//	{
//		if (arr1[i] == arr2[j])
//		{
//			++i;
//			++j;
//		}
//		else
//		{
//			i = i - j + 2;
//			j = 1;
//		}
//	}
//	if (j >= sizeof(arr2))
//	{
//		return j - sizeof(arr2);
//	}
//	else
//		return 0;
//}
//main()
//{
//	char chs[10] = { "aababba" };
//	char cht[] = { "abba" };
//	Index(chs, cht);
//	return 0;
//}
typedef struct string
{
	char ch[10];
	int Slength;
}S;
typedef struct T
{
	char ch[10];
	int Tlength;
}T;
main()
{
	int i = 1;
	int j = 1;
	S s = { " abbabaa",7 };
	T t = { " bbab",4};
	while (i<=s.Slength&&j<=t.Tlength)
	{
		if (s.ch[i] == t.ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i = (i - (j-1))+1;
			j = 1;
		}
	}
	if (j >=t.Tlength)
	{
		return(i-t.Tlength);
	}
	else
	{
		return 0;
	}
	return 0;
}