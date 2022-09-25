#include <stdio.h>
int main(void)
{
    int num = 8;
    printf("Num: %d, %o, %#o, %x, %#x\n", num,num,num,num,num);
    printf("%e, %f, %g\n", 0.1234, 0.1234, 1.23e-3);
    printf("%s %s %s\n", "H", "HELLLO", "hi");
    printf("%-8s %5s %5s\n", "Name", "Major", "Age");
    return 0;
}