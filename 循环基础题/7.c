//求100-200的素数
//方法一  试除法

#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}

//方法二  #include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for(i = 100;i<=200;i++)
	{
		int j = 0;
		for(j = 2;j<=sqrt(i);j++)
		{
			if(i%j == 0)
			{	
				break;
			}
		}
		if(j>sqrt(i))
		{
			count++;
			printf("%d ",i );
		}
	}
	printf("\ncount = %d\n",count);
	return 0;
}