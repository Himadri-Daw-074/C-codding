#include <stdio.h>

int main() {
    int a[3][4],b[4][2],result[3][2];
    int i,j,k;
    printf("Enter elements of 3x4 Matrix A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 4x2 Matrix B:\n");
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            result[i][j]=0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            for(k=0;k<4;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nResultant 3x2 Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
