#include<stdio.h>

int main(){
    int x,y,flag=0;
    printf("Player 1: ");
    scanf("%d",&x);
    
    printf("Player 2: ");
    scanf("%d",&y);

    if(x!=y){
        printf("Wrong, 2 Chance(s) Left!\n");
            printf("Player 2: ");
                scanf("%d",&y);
            if(x!=y){
                printf("Wrong, 1 Chance(s) Left!\n");
                    printf("Player 2: ");
                        scanf("%d",&y);
                            if(x!=y){
                                printf("Wrong, 0 Chance(s) Left!\n");
                                printf("Player-1 wins!");
                            }
                            else{
                                printf("Right, Player-2 wins!\n");
                            }
            }
            else{
                printf("Right, Player-2 wins!\n");
            }
    }
    else
    {
        printf("Right, Player-2 wins!\n");
    }

    return 0;
}
