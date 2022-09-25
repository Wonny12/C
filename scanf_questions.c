#include <stdio.h>
int main(void)
{
/*  Question 1 
    int num1, num2;
    int sub, mult;

    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);
    sub = num1 - num2;
    mult = num1*num2;
    printf("sub: %d\n", sub), printf("mult: %d\n", mult);
-------------------------------------------------------------
    Question 2
    int num1, num2, num3, result;
    printf("Enter the three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = num1*num2+num3;

    printf("result: %d\n", result);
--------------------------------------------------------------
    Question 3
    int num1;
    printf("Enter the integer: ");
    scanf("%d", &num1);
    num1 *= num1;
    printf("num1: %d\n", num1);
    return 0;
---------------------------------------------------------------
    Question 4
    int num1, num2;
    int q,r; //q -> quotient, r -> remainder
    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);
    q = (num1/num2), r = (num1%num2);
    printf("Quotient: %d\n", q), printf("Remainder: %d\n", r);
    return 0;
*/
    //Question 5
    int num1, num2, num3, result;
    printf("Enter the three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = (num1-num2)*(num2+num3)*(num3%num1);
    printf("result: %d\n", result);
    return 0;
}