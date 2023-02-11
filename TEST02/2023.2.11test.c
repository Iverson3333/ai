#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>    
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr));//16
//	printf("%d\n", sizeof(arr+0));//4/8
//	printf("%d\n", sizeof(*arr));//4/8
//	printf("%d\n", sizeof(arr+1));//4/8
//	printf("%d\n", sizeof(arr[1]));//4/8
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(*&arr));//16
//	printf("%d\n", sizeof(&arr+1));//4/8
//	printf("%d\n", sizeof(&arr[0]));//4/8
//	printf("%d\n", sizeof(&arr[0]+1));//4/8
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr+0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr+1));//4/8
//	//printf("%d\n", sizeof(&arr[0]+1));//4/8
// 
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr+0));//随机值
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr+1));//随机值
//	printf("%d\n", strlen(&arr[0]+1));//随机值
//	return 0;
//}