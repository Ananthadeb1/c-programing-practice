#include<stdio.h>
void main(){
    int i,j,n,a[100],tem;

    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
            tem = a[i];
            a[i] = a[j];
            a[j] = tem;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}