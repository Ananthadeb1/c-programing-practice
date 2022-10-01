#include<stdio.h>

void main(){
    int i, n, a[100],srcnum,count=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want :");
    scanf("%d",&srcnum);

    for(i=0;i<n;i++){
        if(a[i]==srcnum){
            if(count==0)
                printf("Found %d at index position : ",srcnum);
            printf("%d,",i);
            count++;
        }
    }
    if(count==0)
    printf("Not found");
}