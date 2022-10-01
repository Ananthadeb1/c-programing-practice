#include<stdio.h>

int main(){
    int x,y,i,pow;

    printf("Enter the base number: ");
    scanf("%d",&x);
    printf("Enter the power number: ");
    scanf("%d",&y);
    
    if(x>=0 && y >=0){
        if(x==0)
            printf("%d",x);
            else if(y==0)
            printf("1");
            else{
               if (y==1)
               {
                printf("%d",x);
               }
              else  {
                pow=x;
                for(i=2; i<=y ; i++){
                     x= x * pow;
                }
            printf("%d",x);
        }
            }   
    }
      
      else 
         printf("Negative number not acceptable.");


    return 0;
}