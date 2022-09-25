#include <stdio.h>
int main(void)
{
        int num1 = 4;
        int num2 = 5;
        int result1, result2, result3;
        result1 = (num1 == 4 && num2 == 5);
        result2 = (num1<6|| num2>6);
        result3 = (!num1);
        printf("result1: %d\n", result1);
        printf("result1: %d\n", result1);
        printf("result3: %d\n", result3);
}