#include<stdio.h>

int main(){
    int n,i=1,min;

    
    printf("Enter n number: ");
    do
    {
         scanf("%d",&n);
            if(i==1){
                min=n;  
            }
            else if(min>n){
                min=n;
            }
            i++;
    } while (i<=5);
    
   printf("\nMin: %d",min);
    return 0;
}
