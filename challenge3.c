#include <stdio.h>
int main()
{
    int max,i,j,k;
    int used=0;
    printf("Enter the amount of cash you have: ");
    scanf("%d", &max);
    int bread = max/500;
    int shrimp = max/700;
    int coke = max/400;
    for(i=0; i<bread; i++)
    {
        for(j=0; j<shrimp; j++)
        {
            for(k=0; k<coke; k++)
            {
                used = (i*500)+(j*700)+(k*400);
                printf("used:%d\n", used);
                if(used==max)
                {
                    printf("bread: %d shrimp: %d coke:%d\n", bread, shrimp,coke);
                }
                
            }
        }
    }
    return 0;
}