#include <stdio.h>
int main(void)
{
        int num1 = +1;
        int num2 = -3;
        int num3 = 4;
        int num4 = -4;
        int num5 = 10;
        num1 += 3;
        num3 -= 3;
        num3 *= 2;
        num4 /= 1;
        num5 %= 3;
        printf("num1: %d\n", num1);
        printf("num2: %d\n", num2);
        printf("num3: %d\n", num3);
        printf("num4: %d\n", num4);
        printf("num5: %d\n", num5);
        return 0;
}