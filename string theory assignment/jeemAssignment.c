#include <stdio.h>
#include <string.h>

struct employees
{
    int id;
    char name[30];
    int phn_num;
    float salary;
    float all;
    float t_inc;
};
struct employees e[100];

void main()
{
    int n, i;

    printf("Numbers of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Name: ");
        gets(e[i].name);
        printf("Id(don't starts with 0): ");
        scanf("%d", &e[i].id);
        printf("Phone Number (don't starts with 0): ");
        scanf("%d", &e[i].phn_num);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        if (e[i].salary <= 30000)
        {
            e[i].all = ((e[i].salary * 15) / 100);
            e[i].t_inc = e[i].salary + e[i].all;
        }
        else if (e[i].salary > 30000 && e[i].salary <= 50000)
        {
            e[i].all = ((e[i].salary * 20) / 100);
            e[i].t_inc = e[i].salary + e[i].all;
        }
        else if (e[i].salary > 50000)
        {
            e[i].all = ((e[i].salary * 25) / 100);
            e[i].t_inc = e[i].salary + e[i].all;
        }
    }

    int max = e[0].t_inc, min = e[0].t_inc;

    for (i = 1; i < n; i++)
    {
        if (e[i].t_inc >= max)
            max = e[i].t_inc;
        if (e[i].t_inc <= min)
            min = e[i].t_inc;
    }

    int src_id, src_phn;
    printf("Enter the id: ");
    scanf("%d", &src_id);

    for (i = 0; i < n; i++)
    {
        if (e[i].id == src_id)
        {
            printf("ID: %d\n", e[i].id);
            printf("Name: %s\n", e[i].name);
            printf("Phone Number: %d\n", e[i].phn_num);
            printf("Salary: %.2f\n", e[i].salary);
            printf("Allowance : %.2f\n", e[i].all);
            printf("Total Salary: %.2f\n", e[i].t_inc);
        }
    }
    printf("Information of lowest salary holder: \n");
    for (i = 0; i < n; i++)
    {
        if (e[i].t_inc == min)
        {
            printf("ID: %d\n", e[i].id);
            printf("Name: %s\n", e[i].name);
            printf("Phone Number: %d\n", e[i].phn_num);
            printf("Salary: %.2f\n", e[i].salary);
            printf("Allowance : %.2f\n", e[i].all);
            printf("Total Salary: %.2f\n", e[i].t_inc);
        }
    }
    printf("Enter the phone number:");
    scanf("%d", &src_phn);

    for (i = 0; i < n; i++)
    {
        if (e[i].phn_num == src_phn)
        {
            printf("ID: %d\n", e[i].id);
            printf("Name: %s\n", e[i].name);
            printf("Phone Number: %d\n", e[i].phn_num);
            printf("Salary: %.2f\n", e[i].salary);
            printf("Allowance : %.2f\n", e[i].all);
            printf("Total Salary: %.2f\n", e[i].t_inc);
        }
    }
    printf("Information of higest salary holder: \n");
    for (i = 0; i < n; i++)
    {
        if (e[i].t_inc == max)
        {
            printf("ID: %d\n", e[i].id);
            printf("Name: %s\n", e[i].name);
            printf("Phone Number: %d\n", e[i].phn_num);
            printf("Salary: %.2f\n", e[i].salary);
            printf("Allowance : %.2f\n", e[i].all);
            printf("Total Salary: %.2f\n", e[i].t_inc);
        }
    }
}
