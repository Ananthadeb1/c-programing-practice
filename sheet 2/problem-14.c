#include<stdio.h>
#include<math.h>

int main(){
    float x;
    int a,b;
    printf("X : ");
    scanf("%f",&x);
    if(x<0)
        x= x+(x*-2);

    a = ceil(x);
    b = floor(x);
    printf("A : %d\nB : %d\nC : %.1f",a,b,x);
 
    return 0;
}