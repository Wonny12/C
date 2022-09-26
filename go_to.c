#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n==1)
    {
        goto ONE;
    }
    else if (n==2)
    {
        goto TWO;
    }
    else
        goto OTHER;

    ONE:
        printf("you entered 1\n");
        goto END;
    TWO:
        printf("you entered 2\n");
        goto END;
    OTHER:
        printf("you entered other option: %d\n", n);
    END:
        printf("Thank you\n");
        return 0;
}