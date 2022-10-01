#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    char ch[5];
    int num;
    printf("Input : ");
    scanf("%c", &ch[0]);

    if (isdigit(ch[0]) == 1)
    {
        num = atoi(ch);
        printf("%d", num);
    }
    else
        printf("Wrong input");
}