#include<stdio.h>

void main(){
    int n, i,j,newnum;
    printf("Enter a number : ");
    scanf("%d",&n);

    newnum=n;

    for(i=1; i<=n; i++){
        for(j=i;j<=newnum;j++){
            printf("%d",j);
        }
        newnum++;
        printf("\n");
    }
}