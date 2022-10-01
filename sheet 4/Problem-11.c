#include<stdio.h>

int main(){
    int n,i,x,y,j,sum1=0,sum2=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1,j=2;j<=n+1,i<=n;i++,j++){
       x=i*i;
       y=j;
       sum1= x*y;
       sum2+= sum1;
    }
   
    printf("Result: %d",sum2);
    return 0;
}