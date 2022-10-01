#include<stdio.h>

void main(){
    int i, n, j,a[100],m,sum=0;

    printf("Enter two number (m x n): ");
    scanf("%d %d",&m,&n);

    for(i=1;i<=m;i++){
        printf("Row %d: ",i);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]); 
            sum += a[j];
    }
}
        printf("sum = %d",sum);
}