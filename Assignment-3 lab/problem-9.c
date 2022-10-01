#include <stdio.h>
#include <string.h>

int len1 = 0;
int len2 = 0;

char ch1[100], ch2[100];
int str_length1(char ch1[]);
int str_length2(char ch2[]);
int find_substr(char ch1[], char ch2[]);

int main()
{

    int j, i;

    printf("string 1: ");
    gets(ch1);
    printf("string 2: ");
    gets(ch2);

    printf("%d", find_substr(ch1, ch2));

    return 0;
}

int str_length1(char ch1[])
{
    int i;
    for (i = 0; ch1[i] != '\0'; i++)
    {
        len1++;
    }
    return len1;
}
int str_length2(char ch2[])
{
    int i;
    for (i = 0; ch2[i] != '\0'; i++)
    {
        len2++;
    }
    return len2;
}

int find_substr(char ch1[], char ch2[])
{
    int f = 0, i, j;
    int L1 = str_length1(ch1);
    int L2 = str_length2(ch2);

    for (j = 0; j <= L1  - L2; j++)
    {
        for (i = j; i < j + L2; i++)
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
        return 1;
    else
        return -1;
}
