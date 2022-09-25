#include <stdio.h>
int main()
{
    int i=2;
    int n;
    while (i<=9)
    {
        printf("i: %d\n",i);
        n=1;
        while (n<10)
        {
            printf("%d x %d = %d\n", i, n, n*i);
            n++;
        }
        i++;
    }
    return 0;
}