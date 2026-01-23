#include<stdio.h>
void main(){
    int x;
    int i=0;
    printf("Enter an Integer:-");
    scanf("%d",&x);
    for(i=2;i<x;i++){
        if((x%i)==0){
            printf("Number is not Prime: %d",x);
            i=x;
        }
    }
    if(i==(x-1));
     printf("The number is Prime Number: %d",x);
}