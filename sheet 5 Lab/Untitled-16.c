#include<stdio.h>

void main(){
    int i, n, a[100];

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
            if(i%2!=0)
                a[i]=0;
        printf("%d ",a[i]);
    }
}