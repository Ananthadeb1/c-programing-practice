#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    char ch;

    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        ch = tolower(ch);
        printf("%c",ch);
    }
    else
        printf("Wrong input");
}