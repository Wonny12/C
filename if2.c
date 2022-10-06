#include <stdio.h>
int main()
{  
    int n,n2;
    int result, result2;
    
    printf("Enter the numbers: ");
    scanf("%d %d", &n, &n2);
    result = (n<n2) ? n2-n: n-n2;
    printf("Result: %d\n", result);

    return 0;
}