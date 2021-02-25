//在一个有序的数组中查找具体的某个数字。编写int binsearch（int x，int v[],int n）;




//提示：折半查找法
查找的序列有两个要求，一是该序列必须是有序的（即该序列中的所有元素都是按照大小关系排好序的，升序和降序都可以，
本文假设是升序排列的），二是该序列必须是顺序存储的。
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	printf("please print a num\n");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到目标下标");
	}
	return 0;
}