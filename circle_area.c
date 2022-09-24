#include <stdio.h>
int main(void)
{
    double r;
    double area;
    printf("Enter the radius: ");
    scanf("%lf", &r);
    area = r*r;
    printf("Area: %.5lf\n", area);
    return 0;
}