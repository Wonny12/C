#include <stdio.h>
int main()
{
    char arr[] = "Good time";
    int arr_length,i;

    arr_length = sizeof(arr)/sizeof(char);
    for(i=0; i<arr_length; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}