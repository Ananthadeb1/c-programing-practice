#include <stdio.h>

int func_gcd(int n1, int n2)
{
    int i, gcd;

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    return gcd;
}

int func_lcm(int n1, int n2)
{
    int i, lcm, max;

    max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            lcm = max;
            break;
        }
        ++max;
    }
    return lcm;
}

void main()
{

    int i = 0, n1, n2;

    while (1)
    {
        printf("Enter any two numbers: ");
        scanf("%d %d", &n1, &n2);

        int gcd = func_gcd(n1, n2);

        int lcm = func_lcm(n1, n2);

        printf("GCD: %d\nLCM: %d", gcd, lcm);

        i++;
        printf("\n");
    }
}
