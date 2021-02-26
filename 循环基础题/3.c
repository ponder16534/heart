//编写代码实现，模拟用户登录情景，并且只能登录三次（只输入三次密。都错则退出程序）

//
intmain（）
{
	int i = 0;
	char password[20] = {0};
	for(i = 0;i<3;i++)
	{
		printf("请输入密码>");
		scanf("%s",password);
		if(strcmp(password,"123456") == 0)
		{
			printf("登录成功");
			break;
			
		}
	}
	if(i == 3)
		printf("三次密码输入错误，退出程序")
	return 0;
}