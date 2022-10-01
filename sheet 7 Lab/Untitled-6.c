#include<stdio.h>

void main(){
    int n,m,i,j,a[100][100],b[100][100],c[100][100];

   printf("Enter two numbers: ");
    scanf("%d%d",&n,&m);

    

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
             c[i][j]= a[i][j] + b[i][j];
             
        }
    }


    printf("\nA+b :\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}