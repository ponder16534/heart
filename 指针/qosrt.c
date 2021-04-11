#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
#include<string.h>


int compare_int(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
void test()
{
    int values[] = { 40, 10, 100, 90, 20, 25 };
    int n;
    qsort(values, 6, sizeof(int), compare_int);
    for (n = 0; n < 6; n++)
        printf("%d ", values[n]);
}
int compare_flo(const void* a, const void* b)
{
    return ((int)*(float*)a - *(float*)b);
}
void test1()
{
    int n = 0;
    float f[] = { 9.0,8.0,7.0,6.0,5.0 };
    int sz = sizeof(f) / sizeof(f[0]);
    qsort(f, sz, sizeof(float), compare_flo);
    for (n = 0; n < sz; n++)
        printf("%f ", f[n]);
}
struct S
{
    char name[20];
    int age;
};
void cmp_stu_by_age(const void* a, const void* b)
{
    return ((struct S*)a)->age - ((struct S*)b)->age;
}
void cmp_stu_by_name(const void* a, const void* b)
{
    //比较名字就是比较字符串
    //字符串用strcmp来比较
    return strcmp(((struct S*)a)->name, ((struct S*)b)->name);
}
void test3()
{
    struct S s[] = { {"zhangsan",20},{"lisi",30} ,{"wangwu",10} };
    int sz = sizeof(s) / sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
   /* test();
    printf("\n");
    test1();
    printf("\n");*/
    test3();
    return 0;
}