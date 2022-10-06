#include <stdio.h>
int main()
{
    //Array can be called and initialized in this way
    /*
        int arr[5];
        arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;
    */

    //The other way to call and initialize the array
    /*
        int arr[5] = {10,20,30,40,50};
    */

    //The other way
    int arr[] = {10,20,30,40,50};
    int arr2[5] = {10,20}; //Only arr2[0] and arr2[1] have values.
    int sum=0, i;

    for(i=0; i<5; i++)
    {
        sum+=arr[i];
    }
    for(i=0; i<5; i++)
    {
        printf("arr2[%d]: %d\n", i, arr2[i]);
        //arr2[2],[3],[4] will be filled with the value of zero.
    }
    printf("Sum: %d\n", sum);
    return 0;
}