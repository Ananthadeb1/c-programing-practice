#include<stdio.h>

void main(){
    int n, i,j,newnum=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        
        for(j=i;j<=newnum;j++){
            printf("%d",j);
        }
        newnum+=2;
        printf("\n");
    }
}