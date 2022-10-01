#include<stdio.h>
void main(){
    int i,j,n1,n2,a[100],b[100],c[100],k=0;

    printf("Enter a number : ");
    scanf("%d",&n1);

    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a number : ");
    scanf("%d",&n2);

    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }



    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){

            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
            }
            }
    }
    
    if(k>0){
        printf("Intersection : ");
        for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    }
    else
       printf("Empty set"); 
    


}