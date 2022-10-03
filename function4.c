#include <stdio.h>
int ReturnBiggestValue(int n, int n2, int n3)
{
    if (n>n2>n3)
    {
        return n;
    }
    else if (n2>n>n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}
int ReturnSmallestValue (int n, int n2, int n3)
{
    if (n<n2<n3)
    {
        return n;
    }
    else if (n2<n<n3)
    {
        return n2;
    }
    else
    {
        return n3; 
    }
}
int main()
{
    int n,n2,n3;
    printf("Enter the three values: ");
    scanf("%d %d %d", &n, &n2, &n3);
    printf("Biggest: %d\n", ReturnBiggestValue(n,n2,n3));
    printf("Smallest: %d\n", ReturnSmallestValue(n,n2,n3));
    return 0;
}