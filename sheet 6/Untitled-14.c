        #include<stdio.h>

        void main(){
            
            int i,rows,space,star;
            printf("Enter a number : ");
            scanf("%d",&rows);

            for(i=1;i<=rows;i++){
                if(i%2!=0){
                for(star=1;star<=rows; star++){
                    printf("*");
                }
                printf("\n");
            }

            else{
                    printf("*");
                for(space=1;space<=rows-2;space++){
                    printf("_");
                }
                    printf("*");
                printf("\n");
            }
            }
        }