#include<stdio.h>

void main(){
    
    int i,n,j;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--){
            printf("%d",j);
        }
    printf("\n");
    }
}