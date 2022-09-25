#include <stdio.h>
int main()
{
    int n=0;
    int i=0;
    float total=0;
    while(i<5)
    {
        while(n<=0)
        {
            printf("Enter the number: ");
            scanf("%d", &n);
            printf("n: %d\n", n);
        }
        total+=n;
        n=0;
        i++;
        
    }
    printf("Total: %0.2f\n", total);
    return 0;
}