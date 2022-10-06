#include <stdio.h>
int num; //global variable, initialized by 0
int Add(int val)
{
    num += val;
    return num;
}

int main()
{
    printf("Num: %d\n", num);
    Add(3);
    printf("New_num:%d\n", num);
    num++;
    printf("New_num+1 = %d\n", num);
    return 0;
}