#include <stdio.h>
int main(void)
{
    int num1 = 4;
    int num2 = 5;
    int result1, result2, result3;
    int result4, result5, result6;
    result1 = (num1<num2);
    result2 = (num1>num2);
    result3 = (num1==num2);
    result4 = (num1!=num2);
    result5 = (num1<=num2);
    result6 = (num1>=num2);
    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);
    printf("result4: %d\n", result4);
    printf("result5: %d\n", result5);
    printf("result6: %d\n", result6);
    return 0;
}