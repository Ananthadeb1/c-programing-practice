#include<stdio.h>

void print_val(char a){
    printf("Value received from main: %c",a);
}

void main(){
    char x;
    printf("Enter a value: ");
    scanf("%c",&x);
    print_val(x);
}