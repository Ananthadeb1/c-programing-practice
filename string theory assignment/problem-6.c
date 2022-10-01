#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char ch[100];
    int i;
    gets(ch);
    for (i = 0; i <strlen(ch); i++)
    {
        if (isupper(ch[i]) == 1)
        {
            ch[i] = tolower(ch[i]);
        }
        else
        {
            ch[i] = toupper(ch[i]);
        }
    }
    puts(ch);
}