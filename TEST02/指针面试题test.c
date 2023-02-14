#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	/*char *p= "abcdef";*/
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p+0));//6
/*	printf("%d\n",  strlen(*p));*///err
	/*printf("%d\n",  strlen(p[1]));*///err
	printf("%d\n",  strlen(&p));//6
	printf("%d\n",  strlen(&p+1));//随机值
	printf("%d\n",  strlen(&p[0]+1));//5

	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	////printf("%d\n",  strlen(*arr));//err
	////printf("%d\n",  strlen(arr[1]));//err
	//printf("%d\n",  strlen(&arr));//6-&arr-数组的地址-数组指针 char(*p)[7]=&arr;
	//printf("%d\n",  strlen(&arr+1));//随机值
	//printf("%d\n",  strlen(&arr[0]+1));//5

	//printf("%d\n", sizeof(arr));//计算数组的大小，单位是字节：7
	//printf("%d\n", sizeof(arr+0));//计算的是地址的大小-arr+0是首元素地址：4/8
	//printf("%d\n", sizeof(*arr));//*arr是首元素，sizeof（*arr）计算的是首元素的大小：1
	//printf("%d\n", sizeof(arr[1]));//arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小：1
	//printf("%d\n", sizeof(&arr));//&arr虽然是数组的地址，但数组的地址也是地址，所以是；4/8个字节
	//printf("%d\n", sizeof(&arr+1));//4/8-&arr是跳过整个数组后的地址，但也是地址
	//printf("%d\n", sizeof(&arr[0]+1));//4/8-&arr[0]+1是第二个元素的地址
	return 0;
}