#include<stdio.h>

int main(){
 int x,y,inc,dec;
 printf("X : ");
  scanf("%d",&x);
 printf("Y : ");
  scanf("%d",&y);

  x +=y;
  printf("Incremented Value : %d\n",x);
  x -=y;
  x -=y;
  printf("Decremented Value : %d\n",x);
 
    return 0;
}
