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
	printf("%d\n",  strlen(&p+1));//���ֵ
	printf("%d\n",  strlen(&p[0]+1));//5

	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	////printf("%d\n",  strlen(*arr));//err
	////printf("%d\n",  strlen(arr[1]));//err
	//printf("%d\n",  strlen(&arr));//6-&arr-����ĵ�ַ-����ָ�� char(*p)[7]=&arr;
	//printf("%d\n",  strlen(&arr+1));//���ֵ
	//printf("%d\n",  strlen(&arr[0]+1));//5

	//printf("%d\n", sizeof(arr));//��������Ĵ�С����λ���ֽڣ�7
	//printf("%d\n", sizeof(arr+0));//������ǵ�ַ�Ĵ�С-arr+0����Ԫ�ص�ַ��4/8
	//printf("%d\n", sizeof(*arr));//*arr����Ԫ�أ�sizeof��*arr�����������Ԫ�صĴ�С��1
	//printf("%d\n", sizeof(arr[1]));//arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С��1
	//printf("%d\n", sizeof(&arr));//&arr��Ȼ������ĵ�ַ��������ĵ�ַҲ�ǵ�ַ�������ǣ�4/8���ֽ�
	//printf("%d\n", sizeof(&arr+1));//4/8-&arr���������������ĵ�ַ����Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&arr[0]+1));//4/8-&arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
	return 0;
}