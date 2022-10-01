#include<stdio.h>

void main(){
    int a[3][3],i,j,sum =0;

    printf("Enter the numbers: \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
      sum +=  (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

      printf("%d",sum);
    }