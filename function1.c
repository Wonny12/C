#include <stdio.h>
int Add(int n, int n2)
{
    return n+n2;
}

int ReadNumber(void)
{
    int n;
    scanf("%d", &n);
    return n;
}

void PrintResult(int result)
{
    printf("Result:%d\n", result);
}

void HowToUse(void)
{
    printf("Please Enter the two numbers.\n");
    printf("Enter here: ");
}


  
int main()
{
        int n,n2,result;
        HowToUse();
        n = ReadNumber();
        n2 = ReadNumber();
        result = Add(n,n2);
        PrintResult(result);
        return 0;
        
    /*
        //returning the length of the string output including the new line
        int p,p2;
        p = printf("12345\n");
        p2 = printf("hello world\n");

        printf("Length for p: %d\n", p);
        printf("Length for p2: %d\n", p2);
    */

    /*
    
        int result,a,b;
        printf("Enter the two numbers: ");
        scanf("%d %d", &a, &b);

        result = Add(a,b);
        printf("Result:%d\n", result);
    */
}