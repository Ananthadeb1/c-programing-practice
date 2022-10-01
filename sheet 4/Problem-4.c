#include<stdio.h>

int main(){
    int n,i;
    float x,sum=0,avg;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        scanf("%f",&x);
        sum += x; 
    }

    avg=sum/n;
    printf("AVG of %d inputs: %f",n,avg);

    return 0;
}