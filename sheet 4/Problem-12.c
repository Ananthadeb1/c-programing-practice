#include<stdio.h>

int main(){
    int n,i,f1=0,f2=1,f3=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    printf("%d",f2);
    for(i=2;i<=n;++i){
       f3=f1+f2;
       printf(",%d",f3);

        f1=f2;
        f2=f3;

    }
   
    // printf("Result: %d",sum2);
    return 0;
}