#include<stdio.h>

int main(){
 int x,a,b,c,d;
 printf("X : ");
  scanf("%d",&x);
  a = x++;
  --x;
  b = ++x;
  --x;
  c = x--;
  ++x;
  d = --x;
 printf("X++ : %d\n",a);
 printf("++X : %d\n",b);
 printf("X-- : %d\n",c);
 printf("--x : %d\n",d);

 return 0;
}