#include <stdio.h>
int main(void)
{
        int num1 = +1;
        int num2 = -3;
        num1 = -num1;
        num2 = -num2;
        printf("num1: %d\n", num1);
        printf("num2: %d\n", num2);
        return 0;
}