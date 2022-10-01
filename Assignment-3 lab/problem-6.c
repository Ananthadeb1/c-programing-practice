#include <stdio.h>

void is_Prime(int n)
{
    int i, f = 0;
    if (n == 1 || n == 0)
        f = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}

void main()
{
    int n;

    printf("input any number :");
    scanf("%d", &n);

    is_Prime(n);
}
