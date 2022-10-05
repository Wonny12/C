//2022-10-02
#include <stdio.h>
int main()
{
    int n,k;
    int result=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(k=0; result<=n; k++)
    {
        result *= 2;
        printf("K:%d, result:%d, n:%d\n", k, result, n);
    }
    printf("K: %d\n", k-1);
    return 0;
}
