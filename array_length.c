#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5,6,7};
    int arr3[5] = {1,2};
    int arrlen=0, arr2len=0, arr3len=0;
    int i;
    
    printf("arr size: %d\n", sizeof(arr));
    printf("arr2 size: %d\n", sizeof(arr2));
    printf("arr3 size: %d\n", sizeof(arr3));

    arrlen = sizeof(arr)/sizeof(int);
    arr2len = sizeof(arr2)/sizeof(int);
    arr3len = sizeof(arr3)/sizeof(int);

    printf("arrlen: %d\n", arrlen);
    printf("arr2len: %d\n", arr2len);
    printf("arr3len: %d\n", arr3len);

    for(i=0; i<arrlen; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i=0; i<arr2len; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    for(i=0; i<arr3len; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}