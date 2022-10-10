#include <stdio.h>
int main()
{
    /*
        int *ptr = 0x0010;
        double *ptr2 = 0x0010;
        //Not a proper intialization but in order to check (+) operation, it is used.

        printf("ptr+1:%p, ptr+2:%p\n", ptr+1,ptr+2);
        printf("ptr2+1:%p, ptr2+2:%p\n", ptr2+1,ptr2+2);
        ptr++;
        ptr2++;
        printf("ptr:%p, ptr2:%p", ptr,ptr2);
    */
    int arr[3] = {11,22,33};
    int *ptr = arr;
    int i;
    printf("%d,%d,%d\n", *ptr, *(ptr+1), *(ptr+2));
    //*(ptr+1) = arr[1], *(ptr+2) = arr[2]
    printf("*ptr: %d\n", *ptr); ptr++;
    printf("(1) *ptr++: %d\n", *ptr); ptr++;
    printf("(2) *ptr++: %d\n", *ptr); ptr--;
    printf("(1) *ptr--: %d\n", *ptr); ptr--;
    printf("(2) *ptr--: %d\n", *ptr);

    printf("Reading array list: ");

    for(i=0; i<3; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}