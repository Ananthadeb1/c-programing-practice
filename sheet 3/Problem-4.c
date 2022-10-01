#include<stdio.h>

int main(){
    int a,b,c, value;

    printf("Please inpute the first value : ");
    scanf("%d",&a);
    printf("Please inpute the secound value : ");
    scanf("%d",&b);
    printf("Please inpute the third value : ");
    scanf("%d",&c);
    
    value = a+b+c;
    if(value<=180 && a>0 && b>0 && c>0)
        printf("Yes");

    else 
       printf("No"); 

    

    return 0;
}