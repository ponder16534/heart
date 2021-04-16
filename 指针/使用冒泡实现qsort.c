int compare_int(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
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
void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}
void bubble_sort(void* base, int sz, int width, int (cmp)(void* e1, void* e2))
{
    int i = 0;
    //趟数
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        //交换次数
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
            {
                //交换
                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
            }
        }
    }
}
void test4()
{
    int values[] = { 40, 10, 100, 90, 20, 25 };
    int sz = sizeof(values) / sizeof(values[0]);
    bubble_sort(values,sz,sizeof(values[0]), compare_int);
    
}
void test5()
{
    struct S s[] = { {"zhangsan",20},{"lisi",30} ,{"wangwu",10} };
    int sz = sizeof(s) / sizeof(s[0]);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
int main()
{

    test4();
    test5();
   return 0;
}