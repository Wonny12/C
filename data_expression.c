#include <stdio.h>
int main(void)
{
    
    int num1 = 0xC7, num2 = 0xD3; //Hexadecimal
    int num3 = 043, num4 = 054; //Octal
    printf("Decimal of num1: %d\n", num1);
    printf("Decimal of num2: %d\n", num2);
    printf("Decimal of num3: %d\n", num3);
    printf("Decimal of num4: %d\n", num4);
    return 0;
    /*
        float num = 0;
        int i;
        for (i=0; i<100; i++) {
            num+=0.1;
        }
        printf("num:%f\n", num);
        return 0;
        
        Question 1
        Decimal Binary
        8       1000
        9       1001
        10      1010
        11      1011
        12      1100
        13      1101
        14      1110
        15      1111
        16      10000
        17      10001
        18      10010
        19      10011
        20      10100

        Question 2
        Decimal Octal
        5       5
        6       6
        7       7
        8       10
        9       11
        10      12  
        11      13
        12      14
        13      15
        14      16
        15      17
        16      20
        17      21
        18      22

        Question 3
        Number of expressions available
        1 bit:      2 to the power of 1
        2 bits:     2 to the power of 2
        4 bits:     2 to the power of 4
        1 byte:     2 to the power of 8
        4 bytes:    2 to the power of 32

        Question 4
        Binary      Decimal
        00000001    1
        00000010    2
        00000100    4
        00001000    8
        00010000    16
        00100000    32
        01000000    64
        10000000    128

        Question 5
        Binary      Decimal
        00010001    17
        10100010    162
        11110111    246

        Question 6
        Binary      Decimal
        01001111    79
        00110011    51
        (-)10101001 -87
        (-)00001111 -16
    */
}