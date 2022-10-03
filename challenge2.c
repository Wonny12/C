#include <stdio.h>
//calculating gcd
int main()
{
    int gcd;
    int num, num2;
    int i;
    printf("Enter the numbers: ");
    scanf("%d %d", &num,&num2);
    if(num>num2)
    {
        for(i=1; i<num; i++)
        {
            if (num%i==0 && num2%i==0)
            {
                //printf("Common Divisions: %d\n", i);
                gcd = i;
                //printf("GCD: %d\n", gcd);
            }
        }
    }
    else if(num2>num)
    {
        for(i=1; i<num2; i++)
        {
            if(num%i==0 && num2%i==0)
            {
                gcd = i;
                //printf("Common Divisions: %d\n", i);
                //printf("GCD: %d\n", gcd);
            }
        }
    }
    printf("gcd:%d\n", gcd);
    return 0;

}