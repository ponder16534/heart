#include"game.h"
void menu()
{
	printf("***************************************\n");
	printf("********    1.play    *****************\n");
	printf("********    0.exit    *****************\n");
	printf("***************************************\n");
}
void game()
{
	//1，布置雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//Displayboard(mine ,ROW,COL);
	Displayboard(show, ROW, COL);//无须打印外面一圈
	//布置雷
	setmine(mine,ROW,COL);
	//Displayboard(mine, ROW, COL);
	Findmine(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("选择错误\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}