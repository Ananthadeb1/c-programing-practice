#include<stdio.h>

int main(){
    int p1,p2,i,n,x;
    printf("\nPlayer 1: ");
    scanf("%d",&p1);
    printf("\nGussing time : ");
    scanf("%d",&n);
    
    x=n;
    for(i=1; i<=n;i++){
    printf("\nPlayer 2: ");
    scanf("%d",&p2);
        x=x-1;
        if(p1!=p2){
            
            printf("Wrong, %d Choice(s) Left!",x);

            if (x==0)
            {
                printf("\nPlayer-1 wins!");
            }
            

        }
        else if(p1==p2){
            printf("Right, Player-2 wins!");
            break;
        }
        
    }
    

    
    
    return 0;
}