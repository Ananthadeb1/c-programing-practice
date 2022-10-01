        #include<stdio.h>

        void main(){
            
            int i,rows,space,ch;
            printf("Enter a number : ");
            scanf("%d",&rows);

            for(i=1;i<=rows;i++){
                if(i==rows/2+1){
                for(ch=1;ch<=rows; ch++){
                    printf("H ");
                }
                printf("\n");
            }

            else{
                    printf("H ");
                for(space=1;space<=rows-2;space++){
                    printf("  ");
                }
                    printf("H ");
                printf("\n");
            }
            }
        }