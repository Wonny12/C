#include <stdio.h>
int main()
{
    /*
        //my answers
        int i,n;
        for (i=2; i<=9; i++)
        {
            for (n=1; n<=i; n++)
            {
                if (i%2!=0)
                {
                    continue;
                }
                
                printf("%d x %d = %d\n", i,n,i*n); 
                
            }
            
        }
    */
    //Suggested answer
    int i,n;
    for(i=1; i<10; i++)
    {
        if (i%2!=0)
        {
            continue;
        }

        for(n=1; n<10; n++)
        {
            if(i<n)
            {
                break;
            }
            printf("%d x %d = %d\n", i,n,i*n);
        }
    }
    return 0;
    
}