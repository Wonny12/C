#include <stdio.h>
int main()
{
    int arr[3] = {1,2,3};
    double arr2[3] = {1.1,2.2,3.3};
    int i;
    int *ptr = arr;
    /*
        printf("Contents in arraylist: ");
        for(i=0; i<3; i++)
        {
            printf("%d ", arr[i]);
        }
    */
    printf("*arr: %d, *arr2: %g\n", *arr, *arr2);
    printf("arr[0]: %d, arr2[0]: %g\n", arr[0],arr2[0]);

    //(*arr)+= 10;
    //(*arr2)+= 10.5;
    for(i=0; i<3; i++)
    {
        arr[i]+=10;
    }
    printf("arr[0]:%d, arr2[0]: %g\n", arr[0], arr2[0]);
    printf("ptr[0]: %d, arr[0]: %d\n", ptr[0], arr[0]);
    printf("*ptr: %d, *arr: %d\n", *ptr, *arr);
    for(i=0; i<3; i++)
    {
        printf("ptr[%d]: %d\n", i,ptr[i]);
    }

    return 0;
    
}