//打印1000-2000年的闰年
//1.能被4整除并且不能被100整除的是闰年
//2.能被400整除是闰年
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for(year = 1000;year <= 2000;year++)
	{
		if((year%4 == 0 && year%100 != 0)||(year %400 == 0))
		{
			printf("%d ",year);
			count++;
		}
	}
	printf("\ncount = %d\n",count);
	return 0;
}