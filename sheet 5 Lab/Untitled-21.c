#include<stdio.h>
void main(){
    int i,j,n1,n2,a[100],b[100],k=0;

    printf("Enter the number a array: ");
    scanf("%d",&n1);

    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the number b array: ");
    scanf("%d",&n2);

    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
        printf("A-B : ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){

            if(a[i]==b[j]){
                k=k+1;
                break;
                }
                }
                if(k==0)
                printf("%d ",a[i]);
                k=0;
            }
    }

