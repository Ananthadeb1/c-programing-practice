#include<stdio.h>

int main(){

    int i,n,sum=0,a[100];
    

    printf ("Enter a number: ");
    scanf("%d",&n);
    for (i=0; i<n;i++){
        scanf("%d",&a[i]);
        if(i % 2==0){
            sum += a[i];
        }
        else
            continue;
    }
        printf("Sum : %d",sum);
    return 0;
}