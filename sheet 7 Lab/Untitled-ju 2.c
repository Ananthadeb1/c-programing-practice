#include <stdio.h>

int main() {
    int n,i,j,newnum,result,m;
    scanf("%d",&n);
    newnum=n;
    m=n;
    for(i=1;i<=n;i++){
        for(j=0;j<m;j++){
            result=newnum*2;
            printf("%d",result);
            newnum--;
        }
        m=n-i;
        newnum=m;
        printf("\n");
    }

    return 0;
}
