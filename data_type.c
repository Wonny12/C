#include <stdio.h>
int main(void)
{
    /*
        char: 1 byte
        short: 2 bytes
        int: 4 bytes
        long: 4 bytes
        long long: 8 bytes

        float: 4 bytes
        double: 8 bytes
        long double: same as 8 bytes or higher
    */
    int n = 10;
    char ch = 9;
    float f = 2.5;
    double d = 10.2454;

    printf("size of n: %d\n", sizeof(n));
    printf("size of ch: %d\n", sizeof(ch));
    printf("size of f: %d\n", sizeof(f));
    printf("size of d: %d\n", sizeof(d));
    printf("size of int: %d\n", sizeof(int));
    printf("size of char: %d\n", sizeof(char));
    printf("size of long: %d\n", sizeof(long));
    printf("size of long long: %d\n", sizeof(long long));
    printf("size of float: %d\n", sizeof(float));
    printf("size of double: %d\n", sizeof(double));
    printf("size of long double: %d\n", sizeof(long double));
    return 0;

    
}