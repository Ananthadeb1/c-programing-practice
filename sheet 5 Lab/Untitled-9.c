#include<stdio.h>

int main(){

    int j,n,i;
    char a[100];
    int count=0;

    printf ("Enter a number: ");
    scanf("%d",&n);

    printf("Enter a string: ");

    for (i=0; i<n;i++){
        scanf("%c",&a[i]);
    }
    fflush(stdin);

    for(j=0;j<n;j++){
        if( a[j]=='a' ||
            a[j]=='e' ||
            a[j]=='o' ||
            a[j]=='j' ||
            a[j]=='u' ||
            a[j]=='A' ||
            a[j]=='E' ||
            a[j]=='I' ||
            a[j]=='O' ||
            a[j]=='U'  ){

                count ++;
        }
            
            else
            continue;
    }

    printf("count: %d",count);
    return 0;
}