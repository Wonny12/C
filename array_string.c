#include <stdio.h>
int main()
{
    char str[] = "Hello world!";
    printf("sizeof str: %d\n", sizeof(str));
    printf("sizeof char: %d\n", sizeof(char));
    printf("Letters: %s\n", str);

    str[8] = 'x';
    printf("New_Letters: %s\n", str);

    //********************************************
    char str2[50];
    int i=0;
    printf("Enter the letters: ");
    scanf("%s", str2);
    printf("Each chars: ");
    while(str2[i]!= '\0')
    {
        printf("%c", str2[i]);
        i++;
    }
    return 0;
}