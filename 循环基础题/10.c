#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 600");
again:
	printf("电脑将在五分钟内关机，如果输入：我最帅，就取消关机！\n请输入:>");
	scanf("%s",&input);
	if(0 == strcmp(input,"我最帅"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
