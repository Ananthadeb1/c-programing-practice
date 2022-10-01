#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[100], ch2[100];
    int j, i, f;
 
    printf("string 1: ");
    gets(ch1);
    printf("string 2: ");
    gets(ch2);
    for (j = 0; j <= strlen(ch1) - strlen(ch2); j++)
    {
        for (i = j; i < j + strlen(ch2); i++)
        {
            f = 1;
            if (ch1[i] != ch2[i - j])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            break;
    }
    if (f == 1)
        printf("1");
    else
        printf("-1");
    return 0;
}