#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("**    1.add  2sub    **\n");
	printf("**    3.mul  4.div   **\n");
	printf("******  0.exit   ******\n");
	printf("***********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void Calc(int (*pf)(int ,int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d \n", pf(x, y));
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
	
		switch (input)
		{
		case 1:
			Calc(Add);
			
			break;	
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
