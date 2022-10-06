#include <stdio.h>
int main()
{
    /*
        int i;
        for(i=1; i<=100; i++)
        {
            if((i%3==0) ||(i%4==0))
            {
                printf("Multiples of 3 or 4: %d\n", i);
            }
    }
    
        int num, abs;
        printf("Enter the number: ");
        scanf("%d", &num);

        abs = num>0 ? num : num*(-1);
        printf("Absolute value: %d\n", abs);
        return 0;
   
        int i;
        for(i=1; i<=100; i++)
        {
            if (i%7==0 || i%9==0)
            {
                printf("Multiples of 7 or 9: %d\n", i);
            }
        }
    
        int n,n2;
        printf("Enter two numbers: ");
        scanf("%d %d", &n,&n2);
        if(n>n2)
        {
            printf("Result: %d\n", (n-n2));
        }
        else if(n2>n)
        {
            printf("Result: %d\n", (n2-n));
        }
        else
        {
            printf("Error occured\n");
        }
    */
        float kor, eng, math;
        float total, avg;
        char grade;
        int i;
        printf("Enter the score for korean: ");
        scanf("%f", &kor);
        if (kor<0)
        {
            printf("Please re-enter the score: ");
            scanf("%f", &kor);
        }
        printf("Enter the score for english: ");
        scanf("%f", &eng);
        printf("Enter the score for math: ");
        scanf("%f", &math);
        total = kor+eng+math;
        avg = total/3;
        printf("Total: %0.2f, avg: %0.2f\n", total, avg);
        
        if (avg>=90)
        {
            grade = 'A';
            printf("Avg: %0.2f & Grade: %c\n", avg, grade);
        }
        else if (avg>=80)
        {
            grade = 'B';
            printf("Avg: %0.2f & Grade: %c\n", avg, grade);
        }
        else if (avg>=70)
        {
            grade = 'C';
            printf("Avg: %0.2f & Grade: %c\n", avg, grade);
        }
        else if (avg>=50)
        {
            grade = 'D';
            printf("Avg: %0.2f & Grade: %c\n", avg, grade);
        }
        else if (avg<50)
        {
            grade = 'F';
            printf("Avg: %0.2f & Grade: %c\n", avg, grade);
        }
        else
        {
            printf("Error Occured\n");
        }
        return 0;
}