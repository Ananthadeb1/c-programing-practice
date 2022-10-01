#include<stdio.h>

int main(){
    int n,i,fac=1;

    printf("Enter the number: ");
    scanf("%d",&n);
    
    if(n<0){
        printf("Negative number not acceptable.");
    }
      
      else {
         printf("%d! = ",n);
    for(i=n;i>=1;--i){
        fac *= i;
        if (i==1)   
        {
            printf("%d ",i);
        }
        
       else{
        printf("%d X ",i);
}

    }
   printf("= %d",fac);
   }
    // printf("Result: %d",sum2);
    return 0;
}