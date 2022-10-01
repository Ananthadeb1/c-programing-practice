#include<stdio.h>

void main(){

    float num1,num2,add, sub,multi;
    int rem,quot;

    printf("Enter two value: ");
    scanf("%f%f",&num1,&num2);

    add = num1 + num2;
    sub = num1 -num2;
    multi = num1 * num2;
    quot = num1 / num2;
    rem = (int)num1 % (int)num2;

    printf("Additioin: %.1f\nSubtration: %.1f\nMultiplication: %.1f\nQuotient: %d\nReminder: %d",add,sub,multi,quot,rem); 

}