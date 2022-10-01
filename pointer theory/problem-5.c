#include <stdio.h>

void main()
{
    int ary[100], b[100], i, n;

    int *p = ary;
    int  *cpy = b;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", p++);
    }
    p = ary;
    for (i = 0; i < n; i++)
    {
        printf("%d", p++);
    }

    p = ary ;

    for (i = 0; i < n; i++)
    {
        p = cpy;
        printf("%d ", cpy);
        p++;
        cpy++;
    }
}