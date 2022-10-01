#include<stdio.h>

struct time {
    float h,m,s, t_tim;
    int diff,hr,min,sec;
};
struct time t[2];

void main(){
    int i;
    for(i=0;i<2;i++){
        scanf("%f%f%f",&t[i].h,&t[i].m,&t[i].s);
        t[i].t_tim = ((t[i].h*60)*60 + (t[i].m * 60) + t[i].s); 
    }

    t[0].diff = t[0].t_tim - t[1].t_tim;
    t[0].hr = ((t[0].diff / 60) / 60);
    t[0].min = ((t[0].diff / 60)%60);
    t[0].sec = ((t[0].diff % 60)%60)%60;
    printf("%d %d %d",t[0].hr,t[0].min,t[0].sec);
}