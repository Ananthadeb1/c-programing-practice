#include<stdio.h>

int main(){

float n1,n2;
int choice,schoice,r1,r2;

    
    printf("a : ");
    scanf("%f",&n1);
    printf("b : ");
    scanf("%f",&n2);
    printf("Choice: 1, 2, 3, 4 are for performing addition, subtraction, multiplication, division (quotient) respectively.");
    printf("\nchoice : ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        printf("Addition : %.2f",n1+n2);
        break;
    case 2:
        printf("Substration : %.2f",n1-n2);
        break;
    case 3:
        printf("Multiplication : %.0f",n1*n2);
        break;
    case 4:
        
            printf("1 for quotient and 2 for reminder : ");
            scanf("%d",&schoice);
             r1 = (int)n1;
             r2 = (int)n2;
            if (schoice == 1){
                   
                printf("Quotient : %d",r1/r2);
            }
                else if (schoice == 2){
                    printf("Reminder : %d",r1%r2);
                }
        
        
        break;
    
    default:
        printf("inpute a valid operator or number");
        break;
    }

    return 0;
}