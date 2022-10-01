#include<stdio.h>

void main(){
    int i, n, a[100];

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
            if(a[i]%3==0)
                a[i]=-1;
        printf("%d ",a[i]);
    }
}