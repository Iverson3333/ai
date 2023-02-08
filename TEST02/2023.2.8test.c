#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(p[i]+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{5,6,7,8,9} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num = 10;
//	int nul = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	int sz=Add(num, nul);
//	printf("%d\n", sz);
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	return 0;
//}
void Print(char* p)
{
	printf("%s\n", p);
}
int main()
{
	void(*pa)(char*) = Print;
	(*pa)("hello tanzhen");
	return 0;
}