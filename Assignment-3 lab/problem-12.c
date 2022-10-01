#include <stdio.h>

struct player
{
    char name[30];
    char country[30];
    int run[3];
    int wicket[3];
    int point[3];
};

struct player p[2];

struct player point_count();
struct player MOM_func(int i);
struct player MOS();

void main()
{
    int j, i;

    point_count();

    for (i = 0; i < 3; i++)
    {
        printf("\nmatch %d:\n", i + 1);
        for (j = 0; j < 2; j++)
        {
            printf("%s", p[j].name);
            printf(" :%d\n", p[j].point[i]);
        }
        MOM_func(i);
        printf("\n");
    }
    MOS();
}

struct player point_count()
{
    int w_point, r_point, i, j;

    for (j = 0; j < 2; j++)

    {
        printf("Name: ");
        fflush(stdin);
        gets(p[j].name);
        printf("Country: ");
        fflush(stdin);
        gets(p[j].country);

        for (i = 0; i < 3; i++)
        {
            printf("Run: ");
            scanf("%d", &p[j].run[i]);
        }
        for (i = 0; i < 3; i++)
        {
            printf("Wicket: ");
            scanf("%d", &p[j].wicket[i]);
        }
    }

    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 3; i++)
        {

            w_point = p[j].wicket[i] * 12;

            if (p[j].run[i] <= 25)
                r_point = 5;
            else if (p[j].run[i] > 25 && p[j].run[i] <= 50)
                r_point = 10;
            else if (p[j].run[i] > 50 && p[j].run[i] <= 75)
                r_point = 15;
            else if (p[j].run[i] >= 75)
                r_point = 20;

            p[j].point[i] = w_point + r_point;
        }
    }
}

struct player MOM_func(int i)
{

    int j;

    for (j = 0; j < 1; j++)
    {
        int f = j;
        f++;
        if (p[j].point[i] > p[f].point[i])
            printf("MOM :%s\n", p[j].name);

        else
            printf("MOM :%s\n", p[f].name);
    }
}

struct player MOS()
{
    int i, j, t_point[2];

    for (i = 0; i < 2; i++)
    {
        t_point[i] = 0;
        for (j = 0; j < 3; j++)
        {
            t_point[i] += p[i].point[j];
        }
    }

    if (t_point[0] > t_point[1])
        printf("MOS: %s", p[0].name);
    else
        printf("MOS: %s", p[1].name);
}