#include <stdio.h>
/*
    int SimpleFuncOne(void)
    {
        int num=10;
        num++;
        printf("SimpleFuncOne: %d\n", num);
        return 0;
    }

    int SimpleFuncTwo(void)
    {
        int num1=20;
        int num2=30;
        num1++; num2--;
        printf("num1 & num2: %d %d \n", num1, num2);
        return 0;
    }
*/
int main()
{
    /*
        int num=17;
        SimpleFuncOne();
        SimpleFuncTwo();
        printf("Main num: %d\n", num);
    */
    int cnt;
    for(cnt=0; cnt<3; cnt++)
    {
        int num=0;
        num++;
        printf("Repeated %d times, num: %d\n", cnt+1, num);
    }
    if(cnt==3)
    {
        int num=7;
        num++;
        printf("num in if statement: %d\n", num);
    }
    return 0;
}