#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//typedef struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//}s;
//typedef struct T
//{
//	char arr1[10];
//	  s s;
//	char* pc;
//}T;
//int main()
//{
//	char arr2[20] = { "hello world" };
//	T t = { "hehe",{10,'s',"hello bit",3.36},arr2 };
//	printf("%s\n", t.arr1);
//	printf("%s\n", t.s.arr);
//	printf("%s\n", t.pc);
//	printf("%lf\n", t.s.d);
//	return 0;
//}
typedef struct s
{
char name[20];
int age;
char tele[20];
char sex[20];
}s;
void print(s* pc)
{
	printf("name:%s\n", pc->name);
	printf("age:%d\n", pc->age);
	printf("tele:%s\n", pc->tele);
	printf("sex:%s\n", pc->sex);

}
int main()
{
	s s = { "уехЩ",20,"16396653236","дп" };
	print(&s);
	return 0;
}