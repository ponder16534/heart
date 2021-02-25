//编写代码，演示多个字符向两端移动


#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main( )
{
	char arr1[] = "hello world";
	char arr2[] = "###########";
	int left = 0;
	int right = strlen(arr1)-1;    //sizeof（arr1）/sizeof（arr[0]）-2 
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);     //休息一秒
		system("cls");   //执行系统命令的函数---“cls”清空屏幕
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}
