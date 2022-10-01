#include<stdio.h>

int main(){
    int n,r,n_r,i,j,k,nfac=1,rfac=1,n_rfac=1,nCr=0;

    printf("Enter two number: ");
    scanf("%d%d",&n,&r);
    n_r= n-r;
    if(n<0 || r<0){
        printf("Negative number not acceptable.");
    }
      
      else {
    for(i=n;i>=1;--i){
        nfac *= i;
        }
    for(j=r;j>=1;--j){
        rfac *= j;
        }
    for(k=n_r;k>=1;--k){
        n_rfac *= k; 
        }
    
    nCr = nfac/(rfac*n_rfac);
    printf("nCr = %d",nCr);
    }

    return 0;
}