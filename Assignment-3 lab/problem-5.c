#include <stdio.h>

struct number
{
    int ary[100];
};
struct number a;

struct number func_ascending(int n);

void main()
{
    int i, j, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a.ary[i]);
    }

    func_ascending(n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a.ary[i]);
    }
}

struct number func_ascending(int n)
{
    int i, j, tem;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a.ary[i] > a.ary[j])
            {
                tem = a.ary[i];
                a.ary[i] = a.ary[j];
                a.ary[j] = tem;
            }
        }
    }

    return a;
}
