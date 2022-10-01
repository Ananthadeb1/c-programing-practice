#include<stdio.h>
int main(){
int b=1534%11;

int a[5] = {6,10,15,9,10};

int *p1,t,u,v,w;

p1 = a;
t= (*p1++);
u= *p1;
v= *++p1;
w= *(++p1);

printf("%d\n%d\n%d\n%d\n",t,u,v,w);

}
