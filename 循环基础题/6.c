//猜数字游戏
#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("###########################\n");
	printf("###  1.play  0.exit  ######\n");
	printf("###########################\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1; 
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了笨蛋\n");
		}
		else if(guess<ret)
		{
			printf("猜小了笨蛋！\n");
		}
		else
		{
			printf("你刚好蒙对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;   
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n"); 
			break;
		default:
			printf("选择错误了笨蛋！！\n");
			break;
		}
	}while(input);
	return 0;
}
