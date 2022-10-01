#include<stdio.h>

int main(){
    int n;

    printf("Please inpute a number : ");
    scanf("%d",&n);

     if (n%2 == 0)
    printf("Even");
    else if(n%2 !=0)
    printf("Odd");

    return 0;
}
