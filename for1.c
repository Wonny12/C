#include <stdio.h>
int main()
{
    int i=0;
    int n=0;
    int total=0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        total += i;
    }
    printf("Total: %d\n", total);
    return 0;
}