#include<stdio.h>

int main(){

    int i,n,a[100],b[100],j=0;

    printf ("Enter a number: ");
    scanf("%d",&n);
    for (i=0; i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=n-1; i>=0;i--){
            
                b[j] = a[i];
            j++;
    }

    for(j=0;j<n;j++){
        printf("%d ",b[j]);
    }
    return 0;
}