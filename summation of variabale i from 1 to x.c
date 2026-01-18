#include<stdio.h>
int main(){
    int x, sum=0;
    printf("Enter a integer: ");
    scanf("%d", &x);

    for(int i=1; i<=x; ++i){
        sum += i; // sum = sum + i
    }

    printf("Sum of integers from 1 to %d is: %d\n", x, sum);
    return 0;
}