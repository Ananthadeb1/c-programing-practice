#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100],dest[100];
    char ch ;
    int i,j=0;
    gets(str);
    getchar();
    scanf("%c",&ch);


    int len= strlen(str);
    int size=(len/2);
    str[size]=ch;

    for(i=0;i<len;i++){
        if(i==size){
            dest[j]=ch;
            --size;
            --i;
        }
            else 
                dest[j]=str[i];
          j++;
    }

    puts(dest);
 
    return 0;
}