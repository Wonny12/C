#include <stdio.h>
int main()
{
    /*
        int num1 = 100;
        int num2 = 100;
        int *pnum;
        pnum = &num1;
        (*pnum) += 30;
        
        pnum = &num2;
        (*pnum) -= 30;
        printf("num1: %d, num2: %d\n", num1, num2);
    */
    int num=10;
    int *pnum1 = &num;
    int *pnum2 = pnum1;
    (*pnum1)++;
    (*pnum2)++;
    printf("num: %d\n", num);
    return 0;
}