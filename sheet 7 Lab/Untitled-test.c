#include<stdio.h>
void main(){
    int yr,fm;
    float inco;
    char ct;
    printf("Catagori: ");
    scanf("%c",&ct);
    printf("work exp: ");
    scanf("%d",&yr);
    printf("family meember: ");
    scanf("%d",&fm);
    printf("Income: ");
    scanf("%f",&inco);

    if((yr>=12 && fm>5) || inco < 1000.50){
        if((ct=='y'||ct=='z') && (fm>8 && inco<1100.78))
            printf("bonus");
            else if(ct=='x' && fm>=6)
                printf("bonus");          
    }
    else 
        printf("Not Bounas");
    

     
}