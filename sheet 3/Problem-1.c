#include<stdio.h>

int main(){
    float n;

    printf("Please inpute a number : ");
    scanf("%f",&n);

    if (n>=0)
    printf("Positive");
    else
    printf("Negative");
    return 0;
}