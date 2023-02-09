#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void (*(signal(int,void(*)(int))))(int);
//typedef void(*palst)(int);
//palst signal(int, palst);
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pa)(int, int) = Add;
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//char* my_strcpy(char* dest, const char* str)
//{
//
//}
//int main()
//{
//	char*(*pf)(char*, const char*) = my_strcpy;
//	return 0;
//}
//char*(*pfarr[4])(char*, const char*) = my_strcpy;
void menu()
{
	printf("************************\n");
	printf("**1.Add          2.Pub**\n");
	printf("**3.Mul          3.Div**\n");
	printf("********0.exit*******\n");
	printf("************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Pub(int x, int y)
{
	return x - y;
}
int Mul (int x, int y)
{
	return x *y;
}
int Div(int x, int y)
{
	return x/ y;
}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		
//
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数>:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数>:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Pub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数>:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数>:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*parr[5])(int, int) = {0,Add,Pub,Mul,Div};
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数>;");
			scanf("%d%d", &x, &y);
			int ret = parr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}