#include<stdio.h>

int main(){
    char x;

    printf("Input something : ");
    scanf("%c",&x);
    
    if((x>='a' && x<='z') || (x>='A'&&x<='Z'))
        printf("Alphabet");
    else if(x>='0' && x<='9')
        printf("Digit");
    else
        printf("Special");

    return 0;
}