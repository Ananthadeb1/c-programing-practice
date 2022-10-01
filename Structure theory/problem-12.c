#include<stdio.h>

struct time{
    float hr,min,sec,h,m,s;
};
struct time t;


void main(){
    scanf("%f%f%f",&t.h,&t.m,&t.s);

    t.hr = t.h + (t.m/60) + ((t.s/60)/60);
    t.min = (t.h * 60) + t.m + (t.s /60);
    t.sec = ((t.h*60)*60) + (t.m * 60) + t.s;

    printf("Hour: %.2f\nminut: %.2f\nsecond: %.0f",t.hr,t.min,t.sec); 
}