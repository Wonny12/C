#include <stdio.h>
int main()
{
    /*
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            break;
    
        char sel;
        printf("M&m: morning, A&a: afternoon, E&e: Evening: ");
        scanf("%c",&sel);

        switch(sel)
        {
            case 'M':
            case 'm':
                printf("Morning\n");
                break;
            case 'A':
            case 'a':
                printf("Afternoon\n");
                break;
            case 'E':
            case 'e':
                printf("Evening\n");
                break;

        }
    */
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    switch(n/10)
    {
        case 0:
            printf("your number: %d\n", n);
            printf("Bigger or equal to 0 and less than 10\n");
            break;
        case 1:
            printf("your number: %d\n", n);
            printf("Bigger or equal to 10 and less than 20\n");
            break;
        case 2:
            printf("your number: %d\n", n);
            printf("Bigger or equal to 20 and less than 30\n");
            break;
        default:
            printf("your number: %d\n", n);
            printf("Bigger than 30\n");
    }
    return 0;
}