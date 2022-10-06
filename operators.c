#include <stdio.h>
int main(void)
{
        int num1=7;
        int num2=3;
        printf("%d+%d=%d\n", num1, num2, num1+num2);
        printf("%d-%d=%d\n", num1, num2, num1-num2);
        printf("%d*%d=%d\n", num1, num2, num1*num2);
        printf("%d/%d=%d\n", num1, num2, num1/num2);
        printf("Finding Remainder: %d/%d=%d\n", num1, num2, num1%num2);
        return 0;
}