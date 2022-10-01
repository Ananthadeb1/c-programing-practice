#include<stdio.h>

int main(){
    int x;
    float y;

    printf("Enter a integer and a floating point number: ");
    scanf("%d%f",&x,&y);

    printf("Assignment: %f assigned to an int produces %d\n",y,(int)y);
    printf("Assignment: %d assigned to a float produces %f\n",x,(float)x);
    
    printf("Type Casting: (float) %d produces %f\n",x,(float)x);
    printf("Type Casting: (int) %f produces %d\n",y,(int)y);

    return 0;
}