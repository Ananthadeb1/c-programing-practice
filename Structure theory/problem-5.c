#include<stdio.h>

struct num
{
    float a,b;
};
struct num n;



void main(){
    scanf("%f%f",&n.a,&n.b);
    if(n.b>0)
    printf("%.2f+%.2fi",n.a,n.b);
    else
    printf("%.2f%.2fi",n.a,n.b);
}