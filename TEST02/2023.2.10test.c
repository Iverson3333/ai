#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//指针数组int* arr[5] = { 0 };
//数组指针int* (*pa)[5] = &arr;
//函数指针的数组int(*pa[5])(int, int);
//函数指针int (*pf)(int,int)
//指向函数指针数组的指针int (*(*pad)[5])(int, int) = &pa;
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pAdd)(int, int) = Add;
//	int sum=(*pAdd)(1, 3);
//	printf("sum=%d\n", sum);
//	return 0;
//}
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0;j<sz-1-i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
	
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}