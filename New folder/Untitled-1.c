#include<stdio.h>
#include<string.h>

void main(){
    char a[100];

    gets(a);
    strrev(a);
    printf("The characters of the string in reverse are: \n%s",a);
    
}