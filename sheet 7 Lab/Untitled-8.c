#include<stdio.h>

void main(){
    int n,m,i,j,max,loci=0,locj=0,a[100][100];

   printf("Enter the numbers: ");
    scanf("%d%d",&n,&m);

    

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    max = a[0][0];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(max<a[i][j]){
                max = a[i][j];
                loci = i;
                locj = j;
            }
        }
    }

    printf("max : %d\n",max);
    printf("Location : [%d][%d]",loci,locj);
}