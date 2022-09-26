#include <stdio.h>
float FahtoCel (float c)
{
    return (1.8*c)+32;
   
}
float CelToFah (float f)
{
    return (f-32)/1.8;
}
int main()
{
    float c,f;
    printf("Enter the celsius: ");
    scanf("%f", &c);
    printf("Enter the fahrenheit: ");
    scanf("%f", &f);
    printf("Fahrenheit to Celsius: %0.2f\n",FahtoCel(c));
    printf("Celsius to Fahrenheit: %0.2f\n", CelToFah(f));
    return 0;
}