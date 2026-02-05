#include<stdio.h>

int main(){
    int x,y,i,gcd =1;
    printf("Enter two integer;-");
    scanf("%d %d",&x,&y);
    
    int min = (x<y)?x:y;
    
    for(i=1;i<=min;i++){
        if((x%i==0)&&(y%i==0)){
            gcd=i;
        }
    }
    printf("GCD of %d and %d is %d",x,y,gcd);
    return 0;
}
