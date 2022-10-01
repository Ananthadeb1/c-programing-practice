#include<stdio.h>

void main(){
    int i,rows,stars;

    printf("Enter a number : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(stars=1;stars<=rows;stars++){
            if(i==stars || stars==rows-i+1)
                printf("*");
            else
                printf("_");
        }
        printf("\n");
    }
}