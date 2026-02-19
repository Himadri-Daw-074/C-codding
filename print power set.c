#include <stdio.h>

int main() {
    int a[]={10,12,15};
    int base =2;
    int n = sizeof(a)/sizeof(a[0]);
    int pow_set_size =1;
    for(int q=0;q<n;q++){
        pow_set_size*=base;
    }
    int c,j,k;
    for(c=0;c<pow_set_size;c++){
        printf("{");
        for(j=0;j<n;j++){
            int b = c;
            for(k=0;k<j;k++){
                b /= 2          //(c&(1<<j))
            }
            if(b % 2 == 1){
                printf("%d",a[j]);
            }
        }
    
        printf("}\n");
    }
}
