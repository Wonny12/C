#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    int i, total=0;


    printf("Enter the two numbers (the second number must be bigger): ");
    scanf("%d %d", &n1, &n2); 
    
    for(i=n1; i<=n2; i++)
    {
        total += i;
    }
    printf("Total: %d\n", total);
    return 0;
}