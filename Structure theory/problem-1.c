#include<stdio.h>
#include<string.h>

void main(){
    struct student
    {
        char name[30];
        int id;
        float cgpa ;
    };
    struct student s;

    gets(s.name);
    
    scanf("%d %f",&s.id,&s.cgpa);
    // getchar();
    // scanf("",);

    printf("Name: %s\nStudent ID: %d\nCGPA:%.2f",s.name,s.id,s.cgpa);
    
}