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
    fp = fopen("D://file storage//file.dat","rb");
    struct student b[2];
    fseek(fp,1*sizeof(struct student ),SEEK_SET);
    fread(&b,sizeof(struct  student),1,fp) ;
    printf("%s,%d,%f \n",b.name,b.std_id,b.cgpa);
   
    fclose(fp);
    
        
}