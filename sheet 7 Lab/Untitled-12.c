#include<stdio.h>

int main(){

    int i,n,m,k=0,j,l;

    printf ("Enter two number: ");
    scanf("%d%d",&n,&m);

    int a[100][100],b[100][100];

    for (i=0; i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        }
        for(i=0; i<n;i++){
             l=0;
            for(j=m-1;j>=0;j--){
                b[k][l] = a[i][j];
            l++;
    }
    k++;
    }

    
        printf("Result: \n");
    for(i=0;i<k;i++){
        for(j=0;j<l;j++){
        printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}