#include<stdio.h>
#include<ctype.h>

void main(){
    char ch;

    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        ch = tolower(ch);
        printf("%c",ch);
    }
    else if(ch>='a' && ch<='z'){
        ch = toupper(ch);
        printf("%c",ch);
    }
    else
        printf("Wrong input");
}