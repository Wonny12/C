#include <stdio.h>
int main()
{
    char str[50];
    int i=0,str_len;
    int str_len_total=0;
    
    printf("Enter the strings: ");
    scanf("%s", str);
    printf("Strings: ");
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
        str_len = sizeof(str[i])/sizeof(char);
        str_len_total += str_len;
    }
    printf("\n");
    printf("The string length: %d\n", str_len);
    printf("The string total length: %d\n", str_len_total);
    //printf("The string length: %d\n", str_len);
    return 0;
}