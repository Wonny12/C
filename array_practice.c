#include <stdio.h>
int main()
{
    int arr[5];
    int i,k;
    int max=0;
    int min=0;
    int total=0;

    printf("Enter the five numbers: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Numbers saved in the array list\n");
    for(i=0; i<5; i++)
    {
        printf("arr[%d]: %d\n", i,arr[i]);
    }
    min = arr[0];

    for(i=0; i<5; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        else if (min>arr[i])
        {
            min = arr[i];
        }
    }

    for(i=0; i<5; i++)
    {
        total += arr[i];
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Total: %d\n", total);
    return 0;
}