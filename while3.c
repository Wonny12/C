#include <stdio.h>
int main()
{
    int i=0;
    int j=0;

    while (i<5)
    {
        while (j<i)
        {
            printf("o ");
            j++;
        }
        printf("*\n");
        //printf("j: %d\n", j);
        j=0;
        i++;
    }
    return 0;
}