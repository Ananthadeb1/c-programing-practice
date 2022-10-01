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

    else if(n==0){
        printf("Zero is not a valid input");
    }
    else
        printf("Negative input is not valid.");

        return 0;
    
}