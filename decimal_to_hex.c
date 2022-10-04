#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Hexadecimal of your number: 0x%02X\n", num);
    return 0;
}