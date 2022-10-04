#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int num2 = ~num;
    num2 += 1;
    printf("(-) of your number: %d\n", num2);

    int num3 = 8;
    int result1 = num<<3;
    int result2 = result1>>2;
    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    return 0;

}