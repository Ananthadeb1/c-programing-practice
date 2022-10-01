#include<stdio.h>

int main(){

    int i,n,a[100];

    printf ("Enter a number: ");
    scanf("%d",&n);
    for (i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array A: ");
    for(i=0; i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\nArray B: ");
    for(i=n-1; i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}