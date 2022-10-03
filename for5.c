#include <stdio.h>
int main()
{
    /*
        int n,i;
        printf("Enter the number: ");
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            printf("Hello world\n");
        }
        return 0;
    
        int n,i;
        int result=0;
        printf("Enter the number: ");
        scanf("%d", &n);

        for(i=1; i<=n; i++)
        {
            printf("%d x %d = %d\n", 3, i, 3*i);
        }
        return 0;
    
        int n=1,i;
        float total=0;
        for(i=1; n!=0; i++)
        {
            printf("Enter the number: ");
            scanf("%d", &n);
            total += n;
        }
        printf("Total: %0.2f\n", total);
        return 0;
    
        int i,n;
        int j;
        printf("Enter the number: ");
        scanf("%d", &n);
        
        for(i=9; i>0; i--)
        {
            printf("%d x %d = %d\n", i, n, i*n);
        }
        
        for (i=9; i>0; i--)
        {
            for(j=1; j<10; j++)
            {
                printf("%d x %d = %d\n", j, i, j*i);
            }
        }
    
        float avg, total;
        int n,i;
        int n2=0;
        printf("How many numbers?: ");
        scanf("%d", &n);
        printf("Enter the numbers: ");
        for (i=1; i<=n; i++)
        {
            scanf("%d", &n2);
            total += n2;
            avg = total/n;
        }
        printf("Total: %0.2f\n", total);
        printf("Avg: %0.2f\n", avg);
        return 0;
    
        int n,i,j;
        for(i=0; i<5; i++)
        {
            
            printf("Enter the number: ");
            scanf("%d", &n);
            if (n==0)
            {
                printf("Re-Enter the number: ");
                scanf("%d", &n);
            }
        }
        return 0;
    
        int i,j;
        for(i=0; i<5; i++)
        {
            for(j=0; j<i; j++)
            {
                printf("o ");
            }
            printf(" *\n");
        }
        return 0;
    
        int i,j;
        int total=0;

        for(i=1; i<=100; i++)
        {
            total += i;
        }
        printf("Total: %d\n", total);
    */    
        int n;
        int i;
        int n2=1;
        printf("Enter the number: ");
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            n2 *= i;
        }
        printf("%d! = %d\n", n, n2);
        return 0;
}