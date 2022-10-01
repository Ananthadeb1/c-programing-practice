#include<stdio.h>
#include<string.h>
int find_len(char str[]);
void main(){
    char str[100];

    printf("Enter your string:");
    gets(str);
    printf("%d",find_len(str));
}

int find_len(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        i++;
    }

    return i;
    
}