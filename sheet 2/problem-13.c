#include<stdio.h>
#include<math.h>


int main(){

    int x;
    float result;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    result = (2*(cos(x)*cos(x)))-(sqrt(3)*sin(sin(x)))+log(x/2);

    printf("Result: %.6f",result);
    
    return 0;
}