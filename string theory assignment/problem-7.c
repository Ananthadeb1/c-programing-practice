#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char ch1[100];
    char ch2[100];
    int i,j ,f=0;
    gets(ch1);

    for(i=0,j=strlen(ch1)-1;i<strlen(ch1),j>=0;i++,j--){
        ch2[j]=ch1[i];
    }
     

    for(i=0;i<strlen(ch1);i++){
        if(ch1[i]==ch2[i])
            f=1;
    else{
        printf("Not palindrome");
        f=0;
        break;}
    }

    if(f==1)
    printf("Palindrome");
    
}