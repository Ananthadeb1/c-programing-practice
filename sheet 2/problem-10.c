#include<stdio.h>

int main(){
 int a,b,c;
 printf("a : ");
  scanf("%d",&a);
 printf("b : "); 
  scanf("%d",&b);
 printf("c : ");
  scanf("%d",&c);

  (a+b<=80)?printf("a) 1\n") : printf("a) 0\n");
  (!(a+b))?printf("b) 1\n") : printf("b) 0\n");
  (c!=0)?printf("c) 1\n") : printf("c) 0\n");


 
    return 0;
}
