#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if (n>0){
        
            if((n != 0) && ((n &(n - 1)) == 0)){
                printf("yes");
    }
    else
        printf("no");
    }

        return 0;
    
}