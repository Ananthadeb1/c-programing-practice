#include <stdio.h>
#include <string.h>

 struct student
    {
        char name[30];
        int id;
        float cgpa;
    };
    struct student s[100];

void main()
{

    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        gets(s[i].name);
        scanf("%d", &s[i].id);
        scanf("%f", &s[i].cgpa);
        
    }

    for (i = 0; i < n; i++)
        printf("Name: %s\nStudent ID: %d\nCGPA:%.2f\n", s[i].name,s[i].id,s[i].cgpa);
        
}