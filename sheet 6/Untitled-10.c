#include<stdio.h>

void main(){
    
    int i,n,j,k;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("_");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
    printf("\n");
    }
}