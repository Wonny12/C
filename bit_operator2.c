#include <stdio.h>
int main(void)
{
    int num = 17;
    //24 = 0010001
    int op = num<<1; //all bits move to left 
    int op2 = num<<2; //moving bits twice to left
    int op3 = num<<3; //moving bits three times to left

    int num2 = -17;

    int op4 = num2>>1; //all bits move to right
    int op5 = num2>>2; //moving bits twice to right
    int op6 = num2>>3; //moving bits three times to right

    printf("op: %d\n", op);
    printf("op2: %d\n", op2);
    printf("op3: %d\n", op3);
    printf("op4: %d\n", op4);
    printf("op5: %d\n", op5);
    printf("op6: %d\n", op6);
    return 0;


}