#include<stdio.h>
int main(){
    int a[100];
    int n;
 printf("Enter the number of elements (max 100): ");
 scanf("%d", &n);
 if (n < 1 || n > 100) {
        printf("Invalid size! Please enter between 1 and 100.\n");
        return 1;
         }
         printf("Enter %d elements of array a:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
for(int i =0; i < n; i++){
    for(int j=0; j < n+1; j++){
        if(a[j]>a[j-1]){
            int temp = a[j=1];
            a[j+1] = a[j];
            a[j] = temp;
      printf("%d",a[j]); 
          }
   
   }
}

}