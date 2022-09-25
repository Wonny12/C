#include <stdio.h>
int main()
{
    int n;
    int i;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i=1; i<=9; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}