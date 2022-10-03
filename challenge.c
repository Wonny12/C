#include <stdio.h>
void CalTimesTable(int n1, int n2)
{
    int i,j;
    
    if(n1<n2)
    {
        for(i=n1; i<=n2; i++)
        {
            for(j=1; j<=9; j++)
            {
                printf("%d x %d = %d\n", i,j,i*j);
            }
        }
    }
    else if (n1>n2)
    {
        for(i=n2; i<=n1; i++)
        {
            for(j=1; j<=9; j++)
            {
                printf("%d x %d = %d\n", i,j,i*j);            
            }
        }
    }
    
}
int main()
{
    /*
        Question 1
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);
        printf("The hex: %#X\n", num);
    */
    int num,num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num, &num2);
    if(num==0 || num2==0)
    {
        printf("Re-enter the numbers: ");
        scanf("%d %d", &num, &num2);
    }
    CalTimesTable(num, num2);
    return 0;
}