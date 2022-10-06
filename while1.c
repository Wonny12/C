#include <stdio.h>
int main()
{
    /*
        int num = 0;
        int i = 0;
        printf("Enter the number: ");
        scanf("%d", &num);
        while (i<10)
        {
            printf("%d x %d = %d\n", num, i, num*i);
            i++;
        }
    
        //Question 1
        int num;
        int i=0;
        printf("Enter the number: ");
        scanf("%d", &num);
        while(i<num)
        {
            printf("Hello World!\n");
            i++;
        }
    
        //Question 2
        int num;
        int t=3;
        int i=1;
        printf("Enter the number: ");
        scanf("%d", &num);
        while(i<=num)
        {
            printf("%d\n", (i*t));
            i++;
        }
    
        //Question 3
        int num=1;
        int add=0;
        while (num!=0)
        {
            printf("Keep entering the numbers...press 0 to quit: ");
            scanf("%d", &num);
            add += num;
        }
        printf("Total: %d\n", add);
        return 0;

        // Question 4
        int num;
        int i=9;
        printf("Enter the number: ");
        scanf("%d", &num);
        while (i>0)
        {
            printf("%d x %d = %d\n", num, i, num*i);
            i--;
        }
        return 0;
    */
        int n;
        int n2;
        int i=0;
        float avg=0;
        float total=0;
        printf("How many numbers?: ");
        scanf("%d", &n);
        while(i++<n)
        {
            printf("Enter the numbers: ");
            scanf("%d", &n2);
            total += n2;
        }
        printf("Total: %0.2f\n", total);
        avg = total/n;
        printf("Avg: %0.2f\n", avg);
        return 0;
}