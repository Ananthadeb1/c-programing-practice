
#include<stdio.h>

int main(){
    int n,i,x=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i++){
        
        x= x+2;
        printf(",%d",x);
    }
    

    return 0;
}