//输出100~999之间个位是5且被7整除，要求每行输出5个，且统计有多少个这样的数字
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i < 1000; i++)
	{
		if ((i % 10 == 5) && (i % 7 == 0))
		{
			count++;
			printf("%d ", i);
			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}