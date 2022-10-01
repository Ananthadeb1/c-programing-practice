#include<stdio.h>

int GenNthPrime(int n);

void main(){
    int n;
    printf("enter Nth num:");
    scanf("%d",&n);
    
    int num=GenNthPrime(n);
    printf("%d",num);
}

int GenNthPrime(int n){
    int i ,count = 1,f=0,j;

    if(n==1)
        return 2;
        
    for (i = 3; count <= n; i++)
    {
        for(j=2;j<i;j++){
        if (i% j == 0)
        {
            f=1;
        }
        }
        if(f=0)
            count++;

        if(count==n){
                return i;
        }      
    }   
    }


