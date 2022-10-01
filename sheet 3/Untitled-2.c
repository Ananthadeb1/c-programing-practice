#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if (n>0){
        do
        {
            if(n%2==0){
                n= n/2;
            }
            else if (n%2!=0){
                printf("No");
                break;
            }
            else if (n==2){
                printf("yes");
                break;
            }
        } while (n>=0);
        
    }
    else
        printf("negative");

        return 0;
    
}