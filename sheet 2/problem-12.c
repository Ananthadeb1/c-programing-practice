#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c;
    float r1,r2;

    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);

    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("Root : %.2f \t %.2f",r1,r2);

    return 0;
}