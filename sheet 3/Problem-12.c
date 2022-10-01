#include<stdio.h>

int main(){

float n1,n2;
int choice,r1,r2;

    
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
            r1 = (int)n1;
             r2 = (int)n2;
        printf("Quotient : %d",r1/r2);
        break;
    
    default:
        printf("inpute a valid operator or number");
        break;
    }

    return 0;
}