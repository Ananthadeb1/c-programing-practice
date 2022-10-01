#include<stdio.h>

void main(){
    int i,j,n,k,a[100][100];

   printf("Enter the numbers: ");
    scanf("%d",&n);


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Major diagonal: ");
    for(i=0;i<n;i++){
        for(j=i;j<i+1;j++){
            printf("%d ",a[i][j]);
        }
    }
    printf("\nMinor diagonal: ");
    for(i=0;i<n;i++){
        for(j=n-1-i;j>n-2-i;j--){
            printf("%d ",a[i][j]);
        }
    }
}
