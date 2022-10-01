#include<stdio.h>

void main(){
    
    int i,rows,space,star,nagetiveStar = 1;
    printf("Enter a odd number : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        if(i<=rows/2+1){
            for(space=1;space<=(rows/2+1)-i;space++){
            printf("_");
        }
        
        for(star=1;star<=(i*2)-1;star++){
            printf("*"); 
        }
        printf("\n");
        }
        else{
            for(space=rows/2+1;space<i;space++){
            printf("_");
        }
         
        for(star=nagetiveStar;star<=rows-2;star++){
            printf("*"); 
        }
        nagetiveStar +=2;
        printf("\n");
        }
    
    }
}