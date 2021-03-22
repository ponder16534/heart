#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dust, const char* str)
{
	char* ret = dust;
	assert(dust != NULL);//断言
	assert(str != NULL);
	//把str指向的字符串拷贝到dust指向的空间，包含'\0'字符
	while (*dust++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "********";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}