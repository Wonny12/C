#include <stdio.h>
#include <string.h>
int main()
{
    /*
        char str[50];
        int str_len=0;
        int total_len=0;
        int i;

        printf("Enter the string: ");
        scanf("%s", str);

        for(i=0; str[i]!='\0'; i++)
        {
            printf("str[%d]: %c\n", i, str[i]);
            str_len = sizeof(str[i])/sizeof(char);
            printf("str[%d]_len: %d\n", i, str_len);
            total_len += str_len;
        }
        printf("Using the total string length: %d\n", strlen(str));
        printf("Total_len: %d\n", total_len);
    */
    /*
        char str[50];
        char temp;
        int i,str_len=0,total_len=0;
        
        printf("Enter the string: ");
        scanf("%s", str);
        for (i=0; str[i]!= '\0'; i++)
        {
            printf("str[%d]: %c\n", i, str[i]);
            str_len = sizeof(str[i])/sizeof(char);
            total_len += str_len;
        }
        printf("Using strlen, string length: %d\n", strlen(str));
        printf("Total_len: %d\n", total_len);

        for(i=0; i<(total_len-1); i++)
        {
            printf("str[%d]: %c\n", i, str[i]);
            //str[0]:s <-> str[3]:k
            temp = str[i];
            str[i] = str[total_len-1];
            printf("Saved letter in temp: %c\n", temp);
            printf("Checking if str[3] and str[0] switched, str[%d]: %c\n", i,str[i]);
            str[total_len-1] = temp;
            total_len--;
        }
        printf("\n");
        printf("The reversed string: %s", str);
        printf("\n");
    */
    char str[50];
    int i;
    int max=0;

    printf("Enter the string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++)
    {
        printf("Each string str[%d]:%c\n", i, str[i]);
        printf("Each string's ASCII value: str[%d]:%d\n", i,str[i]);
        if (max<str[i])
        {
            max = str[i];
        }
    }
    printf("Max ASCII Letter and value: %c and %d\n", max, max);
    return 0;
}