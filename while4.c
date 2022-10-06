#include <stdio.h>
int main()
{
    /*
        int total=0;
        int num=0;
    
        do
        {
            printf("Enter the number (0 to quit): ");
            scanf("%d", &num);
            total += num;
        } while (num!=0);
        printf("Total:%d\n", total);
        return 0;

    

        int total=0;
        int num;
        while (num!=0)
        {
            printf("Enter the number (0 to quit): ");
            scanf("%d", &num);
            total += num;
        }
        printf("Total: %d\n", total);
        return 0;
    */
        int num=0;
        int total=0;
        printf("Enter the number (0 to quit): ");
        scanf("%d", &num);
        total += num;
        while (num!=0)
        {
            printf("Enter more numbers (0 to quit): ");
            scanf("%d",&num);
            total += num;
        }
        printf("Total: %d\n", total);
        return 0;

}