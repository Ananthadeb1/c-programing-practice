#include<stdio.h>

void main(){
    int i,j,rows,stars,mpoint;
    

    printf("Enter a odd number : ");
    scanf("%d",&rows);

        mpoint = rows/2+1;
        j = mpoint -2;

    for(i=1;i<=rows;i++){
        if(i <= mpoint){
            for(stars=1;stars<=rows;stars++){
            if(mpoint==i || stars == mpoint || stars == mpoint-i+1 || stars == mpoint+i-1)
                printf("$");
            else
                printf("_");
        }
        }
        else{
            
            for(stars=1;stars<=rows;stars++){
                if(stars==mpoint-j || stars == mpoint+j || stars == mpoint)
                    printf("$");
                else
                    printf("_");
            }
            j--;
        }
        printf("\n");
    }
}