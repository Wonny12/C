#include <stdio.h>
int main()
{
    int num;
    int sec,min,hr;
    printf("Enter the second: ");
    scanf("%d", &num);
    sec = num%3600;
    min = (num%3600)/60; 
    hr = num/3600;
    printf("h: %d, min: %d, sec: %d\n", hr,min,sec);
    return 0;
}