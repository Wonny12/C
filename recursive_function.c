//the function that recalls itself in function
#include <stdio.h>
/*
    void Recursive (int num)
    {
        if(num<=0)
        {
            return;
        }
        printf("Recursive call %d\n", num);
        Recursive(num-1);
}
*/
int Factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n>=1)
    {
        return n*Factorial(n-1);
    }
    else
    {
        printf("Error Occured\n");
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d! = %d\n", num, Factorial(num));
    //Recursive(3);
    return 0;
}