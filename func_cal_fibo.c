#include <stdio.h>
int CalFibo(int n)
{
    int i;
    int a=0,b=1,c;
    for(i=0; i<n; i++)
    {
        printf("%d ", a);
        c = a+b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    CalFibo(n);
    return 0;
}