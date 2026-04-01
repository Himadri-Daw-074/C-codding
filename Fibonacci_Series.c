#include <stdio.h>

void main()
{
    int a=0, b=1, term,n;
    printf("Enter the limit of the Fibonacci series: ");
    scanf("%d",&n);
    printf("The Fibonacci Series: 0 1 ");
    for(int i=1;i<=n-2;i++)
    {
        term = a+b;
        a=b;
        b=term;
        printf(" %d ",term);
    }
}