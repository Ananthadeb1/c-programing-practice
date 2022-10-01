#include<stdio.h>
int main(){
    char x;
    int i=1;

    while(1)
    {
        scanf(" %c", &x);
        if(x=='A')
            break;
        else
        {
            printf("Input %d: %c\n", i,x);
            i++;
        }
    }
    return 0;
}