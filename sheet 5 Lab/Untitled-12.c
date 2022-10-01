#include<stdio.h>
int main(){
   int a[100],index,i,n,num;
   printf("Enter a number:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("Number:");
   scanf("%d",&num);
   printf("position:");
   scanf("%d",&index);
   for(i=n-1;i>=index;i--)
      a[i+1]=a[i];
   a[index]= num;
   printf("Result :");
   for(i=0;i<=n;i++)
      printf("%d ",a[i]);
   return 0;
}