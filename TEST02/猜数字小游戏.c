#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void menu()
{
	printf("**********************\n");
	printf("***1.play    0.exit***\n");
	printf("**********************\n");

}
void game()
{
	int guss = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guss);
		if (guss > ret)
		{
			printf("�´���\n");
		}
		else if (guss < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (i);
	return 0;
}