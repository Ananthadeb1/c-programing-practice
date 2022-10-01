#include<stdio.h>

int main(){
    int n,i,x=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i++){
        if(i%2==0){
            printf(",0");
        }
       else if(i%2!=0){
        printf(",1");
       }
    }
    printf(".");

    return 0;
}