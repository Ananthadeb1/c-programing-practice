#include<stdio.h>

void main(){
    int n,i,j;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        for(j=1; j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}