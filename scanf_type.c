#include <stdio.h>
int main(void)
{
    int num1, num2, num3;
    double num4;
    float num5;
    long double num6;

    printf("Enter the six values: ");
    scanf("%d %d %d %lf %f %Lf", &num1, &num2, &num3, &num4, &num5, &num6);
    printf("num1: %d %o %x\n", num1, num1, num1);
    printf("num2: %d %o %x\n", num2, num2, num2);
    printf("num3: %d %o %x\n", num3, num3, num3);
    printf("num4: %f\n", num4);
    printf("num5: %f\n", num5);
    printf("num6: %Lf\n", num6);
    return 0;
}