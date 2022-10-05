#include <stdio.h>
int main()
{
    int n;
    int i;
    int count=1;
    for(n=2;count<=10;n++)
    {
        for(i=2;i<=n;i++)
        {
            //printf("i: %d\n", i);
            if(i==n)
            {
                //printf("if(i==n)'s i:%d\n", i);
                printf("%d ", n);
                count++;
                //printf("count:%d\n", count);
            }
            if(n%i==0)
            {
                break;
            }
        }
    }
    printf("\n");
    return 0;
}