#include<stdio.h>

int main(){
    float n1,n2;
    char op;

    
    printf("Enter your expression : ");
    scanf("%f %c %f",&n1,&op,&n2);
    
    switch (op)
    {
    case '+':
        printf("Addition : %f",n1+n2);
        break;
    case '-':
        printf("Substration : %f",n1-n2);
        break;
    case '*':
        printf("Multiplication : %.0f",n1*n2);
        break;
    case '/':
        if(n2 ==0){
            printf("Division: Zero as divisor is not valid!");
        }
        else
        printf("Division : %f",n1/n2);
        break;
    
    default:
        printf("inpute a valid operator or number");
        break;
    }

    return 0;
}