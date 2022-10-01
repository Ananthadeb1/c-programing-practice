#include<stdio.h>

int main(){

    int i,n,j=0,a[100];

    printf ("Enter a number: ");
    scanf("%d",&n);
    for (i=0; i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=n-1; i>=0;i--){
            a[j]=a[i];
        j++;
    }

    for(j=0;j<n;j++){
            printf("%d ",a[j]);
        }
    return 0;
}