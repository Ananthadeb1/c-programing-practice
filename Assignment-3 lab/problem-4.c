#include <stdio.h>
struct multi_by_two
{
    int ary[100];
};
struct multi_by_two a;

struct multi_by_two func(int n);

void main()
{
    int i, n;

    printf("Enter an array size: ");
    scanf("%d", &n);
    printf("Enter array element: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a.ary[i]);
    }

    func(n);

    for (int i = 0; i < n; i++)
    {
        printf("lol= %d ", a.ary[i]);
    }
}
struct multi_by_two func(int n)
{
    int i;
    for (i = 0; i < n; i++)
        a.ary[i] *= 2;

    return a;
}