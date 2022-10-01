#include<stdio.h>

int main(){
 int a,b,c,x,y,z;
 printf("a : ");
  scanf("%d",&a);
 printf("b : ");
  scanf("%d",&b);
 printf("c : ");
  scanf("%d",&c);

  x = a - b / 3 + c * 2 - 1;
  y = a - ( b / ( 3 + c ) * 2) - 1;
  z = a - ( ( b / 3) + c * 2) - 1;


 printf("X = %d\nY = %d\nZ = %d\n",x,y,z);
 
    return 0;
}