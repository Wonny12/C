#include <stdio.h>
int main()
{
    char str[50];
    int i;
    int str_len=0;
    int total_str_len=0;
    int max=0;
    printf("Enter the string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++)
    {
        printf("ASCII values of string: Letter: %c, ASCII: %d\n", str[i], str[i]);
        printf("Letter in str[%d]: %c\n", i, str[i]);
        str_len = sizeof(str[i])/sizeof(char);
        total_str_len += str_len;
    }
    printf("Total_str_len: %d\n", total_str_len);

    
    for(i=0; i<total_str_len-1; i++)
    {
        if(max<str[i])
        {
            max = str[i];
        }
    }
    printf("ASCII max value & the string: %d & %c\n", max,max);
    return 0;
}