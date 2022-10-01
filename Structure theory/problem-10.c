#include<stdio.h>

struct convertor
{
    
    float m,c, meter,centimeter;
};
struct convertor co;
void main(){
    scanf("%f%f",&co.m,&co.c);

    co.meter= co.m + co.c/100;
    co.centimeter = co.m * 100 + co.c;
    printf("Length in meter: %.2f\n",co.meter);
    printf("Length in centimeter: %.0f",co.centimeter);
}
