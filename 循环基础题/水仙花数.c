#include<stdio.h>
#include<math.h>
int main()
{
    int i = 0;
    for (i = 0; i <= 100000; i++)
    {
        //1.确定位数
        int n = 1;
        int tmp = i;
        int sum = 0;
        while (tmp /= 10)
        {
            n++;
        }
        //2计算i的n次方
        tmp = i;
        while (tmp)
        {
            sum += pow(tmp % 10, n);
            tmp /= 10;
        }
        //3. 比较i==sum
        if (i == sum)
        {
            printf("%d ", i);
        }
    }
    return 0;
}