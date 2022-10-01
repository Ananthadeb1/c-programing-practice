#include<stdio.h>

void main(){

    int n,a[100][100],b[100][100],i,j,f;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }

    

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            f=0;
            if(a[i][j] != b[i][j]){
                f=1;
            }
            else 
            f=2;
        }

        if(f==1){
            printf("No");
            break;
        }
    }

    if(f==2)
        printf("Yes");

    
}
