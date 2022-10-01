#include<stdio.h>
#include<string.h>

void main(){
    int i;
    char ch[100];

    gets(ch);

    for(i=0; i<strlen(ch);i++){
        if(ch[i]==' ')
        printf("\n");
        else
            printf("%c",ch[i]);
    }
}