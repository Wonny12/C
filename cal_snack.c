#include <stdio.h>
int main()
{
    int max,i,j,k;
    int used=0;
    printf("Enter the amount of cash you have: ");
    scanf("%d", &max);
    int cream_bread = max/500;
    int shrimp_snack = max/700;
    int coke = max/400;
    for(i=1; i<=cream_bread; i++)
    {
        for(j=1; j<=shrimp_snack; j++)
        {
            for(k=1; k<=coke; k++)
            {
                used = (i*500)+(j*700)+(k*400);
                if(used==max)
                {
                    printf("bread: %d shrimp: %d coke:%d\n", i,j,k);
                }
                
            }
        }
    }
    printf("Which option would you like to choose?\n");
    return 0;
}