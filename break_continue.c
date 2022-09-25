#include <stdio.h>
int main()
{
    int n;
    int i,j;
    for (n=2; n<=9; n++)
    {
        for (i=1; i<=9; i++)
        {
            if (n==2)
            {
                for (j=1; j<=2; j++)
                {
                    printf("%d x %d = %d\n", n, j, n*j);
                }
                break;
            }
            if (n==4)
            else
            {
                printf("%d x %d = %d\n", n, i, n*i);
            }
        }
    }
    return 0;
}