#include<stdio.h>

int main(){

    int i,n1,n2,a[100],b[100];

    printf ("Enter 1st array size: ");
    scanf("%d",&n1);
    for (i=0; i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf ("Enter 2nd array size: ");
    scanf("%d",&n2);
    for (i=0; i<n2;i++){
        scanf("%d",&b[i]);
    }
        printf("Array A: ");
    for(i=0; i<n2;i++){
        printf("%d ",b[i]);
    }
    printf("\nArray B: ");
    for(i=0; i<n1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}