#include <stdio.h>
void main()
{
    for(int i=0;i<=4;i++)
    {
        int n;
        if(i%2==0)
            n=1;
        else
            n=2;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",n);
            n=n+2;
        }
        printf("\n");
    }
}