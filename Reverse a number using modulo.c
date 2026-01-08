#include <stdio.h>
int main(){
    int num, reversed_num=0,remainder;

    printf("enter an integer: ");
    scanf("%d",&num);
    //loop continue as long as the number is not 0
    while (num !=0){
        remainder = num % 10;

        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number: %d\\n", reversed_num);
    return 0;
}