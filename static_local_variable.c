#include <stdio.h>
/*
void SimpleFunc(void)
{
    static int num1;
    int num2=0;
    num1++, num2++;
    printf("Static: %d, Local: %d\n", num1, num2);
}
*/
int AddToTotal(int num)
{
    static int total;
    total+=num;
    return total;
}
int main()
{
    /*
        int i;
        for(i=0; i<3; i++)
        {
            SimpleFunc();
        }
    */
    int num, i;
    for(i=0; i<3; i++)
    {
        printf("Enter%d: ", i+1);
        scanf("%d", &num);
        printf("Total: %d\n", AddToTotal(num));
    }
    return 0;
}