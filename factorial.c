#include <stdio.h>
int main()
{
    int n=0;
    int i;
    int result=1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        result *= i;
        //printf("Result:%d, i:%d\n", result, i);
    }
    printf("n!: %d\n", result);
    return 0;
}