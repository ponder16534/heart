//例题：在屏幕上输出一个9*9乘法口诀表
#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0;
	for(i = 1;i<=9;i++)    //控制行数
	{
		int j = 0;
		for(j = 1;j<=i;j++)  //控制个数
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		Sleep(1000);
		printf("\n");
	}
	return 0;
}
