#include<stdio.h>

struct convertor
{
    
    int m1,c1,m2,c2, meter,centimeter;
};
struct convertor co;
void main(){
    scanf("%d%d",&co.m1,&co.c1);
    scanf("%d%d",&co.m2,&co.c2);

    co.meter= co.m1 + co.m2;
    co.centimeter = co.c1 + co.c2;

    if(co.centimeter > 100){
        co.meter += co.centimeter /100;
        co.centimeter = co.centimeter % 100;
        }

    printf("The sum is %d meter %d centimeter\n",co.meter,co.centimeter);
    
}
