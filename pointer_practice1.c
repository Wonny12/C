#include <stdio.h>
int main()
{
    /*   
        int arr[5] = {1,2,3,4,5};
        int *ptr = arr; //int *ptr = &arr[0]
        int i;
        
        //(*ptr)+=2;
        
        for(i=0; i<5; i++)
        {
            (*ptr) += 2;
            ptr++;
            //arr[i]+=2;
            printf("arr[%d]: %d\n", i,arr[i]);
        }
    
        int arr[5] = {1,2,3,4,5};
        int *ptr = arr;
        int i;

        for(i=0; i<5; i++)
        {
            *(ptr+i) += 2;
            //arr[i] += 2;
            printf("arr[%d]: %d\n", i, arr[i]);
        }
    */
    /*
    
        int arr[5] = {1,2,3,4,5};
        int *ptr = &arr[4];
        int total = 0;
        int i;
        printf("arr[4]: %d\n", *ptr);
        for(i=0; i<5; i++)
        {
            total += *ptr--;
            printf("arr[%d]: %d\n", i, arr[i]);
        }
        return 0;
    */

    /*
        for(i=4; i>=0; i--)
        {
            
            arr[i] = --arr[i];
            total += arr[i];
            
            printf("Total:%d\n", total);
            //arr[i] -= 1;
            printf("Changed arr[%d]: %d\n", i, arr[i]);
        }
        printf("Total:%d\n", total);
        return 0;
    */

    int arr[6] = {1,2,3,4,5,6};
    int *ptr = &arr[0];
    int *ptr2 = &arr[5];
    int temp;
    int len = sizeof(arr)/sizeof(int);
    printf("len:%d\n", len);
    int i;

    for(i=0; i<len/2; i++)
    {
        temp = *ptr;
        *ptr = *ptr2;
        *ptr2 = temp;
        ptr += 1;
        ptr2 -= 1;
    }
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}