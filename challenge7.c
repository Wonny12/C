#include <stdio.h>
int Cal_Recursive(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 2*Cal_Recursive(n-1);
    }
}

int main()
{
    int n,k;
    int result;
    printf("Enter the n: ");
    scanf("%d", &n);
    
    result = Cal_Recursive(n);
    printf("result: %d\n", result);
    return 0;
}