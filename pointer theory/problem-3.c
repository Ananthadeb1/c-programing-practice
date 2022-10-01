#include<stdio.h>

void main(){
    int a,b,*x,*y,tem;
    scanf("%d%d",&a,&b);
    x= &a;
    y= &b;

    tem = *x ;
     *x = *y;
     *y =tem;
    printf("%d %d",*x,*y);
}