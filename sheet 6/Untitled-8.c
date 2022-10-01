#include<stdio.h>

void main(){
    
    int i,n,j;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("*");
        }
    printf("\n");
    }
}