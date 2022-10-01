#include<stdio.h>

int main(){

    int i,n,a[10],min,max,min_ind=0,max_ind=0;

    printf ("Enter a number: ");
    scanf("%d",&n);


    for (i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    max =a[0];
     min =a[0];

    for(i=0; i<n;i++){
        if(max<a[i]){
            max=a[i];
            max_ind=i;
            }}

            for(i=0; i<n;i++){
        if(min>a[i]){
            min=a[i];
            min_ind=i;
            }}

    printf("Max: %d,Index: %d\nMin: %d,Index: %d",max,max_ind,min,min_ind);
    return 0;
}
