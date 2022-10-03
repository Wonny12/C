#include <stdio.h>
int main()
{
    int i=0;
    int total=0;

    do
    {
        printf("i: %d\n", i);
        total += i;
        printf("i: %d\n", i);
        i+=2;
    } while (i<=100);
    printf("Total: %d\n", total);
    return 0;
}