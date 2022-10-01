#include<stdio.h>

void main(){
    int i,j,n,k,a[100][100];

   printf("Enter the numbers: ");
    scanf("%d",&n);

    


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j])
            printf("1 ");

            else
                printf("0 ");
        }
        printf("\n");
    }

}
