#include<stdio.h>

void main(){
    int i,j,k;

   printf("Enter the matrix : \n");

    int a[3][3],b[3][3],c[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            int sum = 0;
                for(k=0;k<3;k++){
                    sum += a[i][k] * b [k][j];
                    c[i][j] = sum;
                }
        }
    }

    printf("\nA * b :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}