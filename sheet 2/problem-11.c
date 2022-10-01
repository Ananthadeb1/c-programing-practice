#include<stdio.h>

int main(){
 int a,b,c,z;
 printf("a : ");
  scanf("%d",&a);
 printf("b : "); 
  scanf("%d",&b);
 printf("c : ");
  scanf("%d",&c);

  ((a+b)<=80 && c>=0)?printf("1) 1\n") : printf("1) 0\n");
  ((a-b)==0 || c!=0)?printf("2) 1\n") : printf("2) 0\n");
  (a!=b || !(b<c) && c>0)?printf("3) 1\n") : printf("3) 0\n");
  ((a!=b || !(b<c)) && c>0)?printf("4) 1\n") : printf("4) 0\n");


 
    return 0;
}