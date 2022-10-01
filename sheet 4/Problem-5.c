#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter frist number: ");
    scanf("%d",&n1);
    printf("Enter secound number: ");
    scanf("%d",&n2);
        
        
    while(n1!=n2){
        if(n1>n2){
            printf("%d,",n1*n1);
            n1--;
        }
        else{
            printf("%d,",n1*n1);
            n1++;
        }
    }

printf("Reached!");
    
    
    return 0;
}