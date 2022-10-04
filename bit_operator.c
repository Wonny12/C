#include <stdio.h>
int main(void)
{
    int op = 24 & 18;
    int op2 = 24 || 18;
    int op3 = 24 ^ 18;
    int op4 = ~24;

    printf("& op: %d\n", op);
    printf("|| op: %d\n", op2);
    printf("^ op: %d\n", op3);
    printf("NOT op: %d\n", op4);
    return 0;
    /*
        Operator AND [&] - return 1 when both of bits are 1
        0 & 0 -> return 0
        0 & 1 -> return 0
        1 & 0 -> return 0
        1 & 1 -> return 1

        Operator OR [||] - return 1 when one of bits is 1
        0 || 0 -> return 0
        0 || 1 -> return 1
        1 || 0 -> return 1
        1 || 1 -> return 1

        Operator XOR [^] - return 1 when boh of bits are different
        0 ^ 0 -> return 0
        0 ^ 1 -> return 1
        1 ^ 0 -> return 1
        1 ^ 1 -> return 0

        Operator NOT [~] - ~ 0 (return 1)
                         - ~ 1 (return 0)

    */

}