#include <stdio.h>

int main() {
    int i,n, j =1,sum =0;
    printf("Enter Your number: ");
    scanf("%d",&n);
    
    if(n==1){
        printf("Result: %d",n);
    }
    else{
        for(i=2;i<=n; i++){
            j=i+(10*j);
            sum+= j;
        }
        printf("Result: %d",sum+1);
    }
    return 0;
}