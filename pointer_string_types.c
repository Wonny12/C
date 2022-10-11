#include <stdio.h>
int main()
{
    char str1[] = "My String";
    char *str2 = "Your String";
    printf("%s %s\n", str1, str2);

    str2 = "Changed String";
    printf("%s %s\n", str1, str2);

    //change string success
    str1[0] = 'X';

    //change string failure: str2[0] = 'X'

    printf("%s\n", str1);

    int num1=10, num2=20, num3=30;
    int *arr[3] = {&num1, &num2, &num3};

    printf("%d\n", *arr[0]);

    char *strArr[3] = {"Simple", "String", "Array"};
    printf("%s\n", strArr[0]);
    printf("%s\n", strArr[1]);
    printf("%s\n", strArr[2]);

    return 0;

}