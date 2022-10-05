#include <stdio.h>
int GetAbsoValue(int n)
{
    if (n<0)
    {
        return n*(-1);
    }
    else if (n>0)
    {
        return n;
    }
    else
    {
        printf("Error occured\n");
    }

}
int AbsoCompare(int n1, int n2)
{
    int result1 = GetAbsoValue(n1);
    int result2 = GetAbsoValue(n2);

    if (result1>result2)
    {
        return result1;
    }
    else if (result1<result2)
    {
        return result2;
    }
    else
    {
        printf("Error occured\n");
    }
}
int main()
{
    int n1,n2;
    int result1, result2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &n1, &n2);
    result1 = GetAbsoValue(n1);
    result2 = GetAbsoValue(n2);
    printf("The bigger Absolute Value: %d\n", AbsoCompare(result1, result2));
    return 0;
}