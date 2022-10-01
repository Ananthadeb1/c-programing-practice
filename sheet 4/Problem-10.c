#include<stdio.h>

int main(){
    int n,i,x,sum=0,sum1=0,sum2=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            x=i-(i*2);
            // printf("%d,",x);
            sum1= sum1+x;
        }
        else{
            // printf("%d,",i);
            sum2= sum2+i;
        }
    }
    sum= sum1+sum2;

    printf("Result : %d",sum);
    return 0;
}