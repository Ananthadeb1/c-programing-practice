#include<stdio.h>

int find_even(int evn[]);

void main(){
    int n;
    int evn[100];

    find_even(evn);
}

int find_even(int evn[]){
    int i,n;
     printf("Enter an array size: ");
    scanf("%d",&n);
    printf("Enter array element: ");
    for(i=0;i<n;i++){
        scanf("%d",&evn[i]);
        }
    for(i=0;i<n;i++){
        if(evn[i]%2==0){
            printf("%d ",evn[i]);
        }
    }


}