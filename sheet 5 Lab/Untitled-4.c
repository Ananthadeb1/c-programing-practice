#include<stdio.h>

int main(){

    int i,n;
    float sum=0,a[100],avg;
    

    printf ("Enter a number: ");
    scanf("%d",&n);
    for (i=0; i<n;i++){
        scanf("%f",&a[i]);
            sum +=a[i];

    }
    avg = sum/n;
        printf("Sum : %.2f",avg);
    return 0;
}