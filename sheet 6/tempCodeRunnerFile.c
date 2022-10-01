#include<stdio.h>

void main(){
    
    int i,n,j,k=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(k==1)
                printf("1");
            else
                printf("0");

                k *= (-1);
        }
        if(n%2==0){
            k *= (-1);
        }
    printf("\n");
    }
}