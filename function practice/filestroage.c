#include<stdio.h>
#include<string.h>

struct student 
{
    char name [50];
    int std_id;
    float cgpa;
};

void main(){
    FILE *fp;
    fp = fopen("D://file storage//file.dat","wb");
    struct student a[2];
    strcpy(a[0].name,"Anantha");
    a[0].std_id =31;
    a[0].cgpa= 3.50;
    strcpy(a[1].name,"abc");
    a[1].std_id =21;
    a[1].cgpa= 2.50;

    fwrite(&a,sizeof(struct  student),2,fp) ;

    fclose(fp);
    
        
}