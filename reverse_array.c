#include <stdio.h>
int main() 
{  
    char str[50], temp; // define the size of str[] array  
    int i;
    int str_len=0,str_len_total=0;
    
    printf ("Enter a string to reverse order: ");  
    scanf("%s", &str);
    for(i=0; str[i] != '\0'; i++)
    {
        printf("i: %d, str[%d]: %c ", i,i,str[i]);
        str_len = sizeof(str[i])/sizeof(char);
        printf("\nstr_len: %d\n", str_len);
        str_len_total += str_len;
    }
    printf("str_len_total: %d\n", str_len_total);

    for(i=0; i<str_len_total-1; i++)
    {
        printf("str[%d]: %c\n", i, str[i]);
        temp = str[i];
        printf("temp: %c\n", temp);
        printf("---------------------------------\n");
        str[i] = str[str_len_total-1];
        printf("str[%d]: %c\n",i,str[str_len_total-1]);
        str[str_len_total-1] = temp;
        printf("str[str_len_total-l]: %c\n", str[str_len_total-1]);
        str_len_total--;
        printf("New str[%d]: %c\n",i,str[str_len_total-1]);
    }
    printf("\nThe reverse of the string: %s\n", str);

    return 0;
}  