#include<stdio.h>

int find_min(int ary[]);

void main(){

    int n;
   

    int ary[100];

    printf("Minimum Value: %d",find_min(ary));
}

int find_min(int ary[]){
    int i,n,min;
     printf("Enter an array size: ");
    scanf("%d",&n);
    printf("Enter array element: ");
    for(i=0;i<n;i++){
        scanf("%d",&ary[i]);
        }
        min=ary[0];

    for(i=0;i<n;i++){
        if(ary[i]<min){
            min=ary[i];
        }  
    }
    return min;



}