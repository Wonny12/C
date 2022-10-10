#include <stdio.h>
int main()
{
    int num1=10,num2=20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *temp = NULL;
    (*ptr1) += 10;
    (*ptr2) -= 10;
    printf("So far, num1: %d, num2: %d\n", num1, num2);

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("After switching pointers... num1: %d, num2: %d\n", num1, num2);
    return 0;
}