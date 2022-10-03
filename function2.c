#include <stdio.h>
int NumberCompare(int n, int n2)
{
    if(n>n2)
    {
        return n;
    }
    else
    {
        return n2;
    }
}
int main()
{
    printf("This number is bigger: %d\n", NumberCompare(7,2));
    printf("This is number is bigger: %d\n", NumberCompare(3,4));
    return 0;
}