#include <stdio.h>
int main()
{
    int a,z;
    for(a=1; a<=9; a++)
    {
        for(z=1; z<=9; z++)
        {
            if(a+z!=9)
            {
                continue;
            }
            printf("Possbilities for a: %d\n", a);
            printf("Possibilities for z: %d\n", z);
            printf("az: %d%d\n", a, z);
            printf("za: %d%d\n", z, a);
            printf("Value: %d%d\n", (a+z), (z+a));
        }
    }
    return 0;
}