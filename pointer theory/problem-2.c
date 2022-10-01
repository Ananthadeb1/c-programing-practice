#include<stdio.h>

void main(){
    int a,b,*x,*y,sum;

    x= &a;
    y= &b;

    scanf("%d%d",x,y);

    sum = *x + *y;
    printf("sum: %d",sum);
}