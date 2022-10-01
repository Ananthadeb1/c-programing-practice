#include<stdio.h>

void main(){
    
    int i,rows,space,star;
    printf("Enter a number : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(space=1;space<=rows-i;space++){
            printf("_");
        }
        
        for(star=1;star<=(i*2)-1;star++){
            printf("*"); 
        }
        
    printf("\n");
    }
}