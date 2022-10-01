    #include<stdio.h>

    void main(){
        
        int i,rows,space,element;
        printf("Enter a number : ");
        scanf("%d",&rows);

        for(element=0;element<rows;element++)
            printf("z");

            printf("\n");

            for(element=1;element<rows-1; element++){

                for(space=1;space< 2*(rows-element-2);space++){
                printf(" ");
            }
            printf("z");
            printf("\n");
        }
        for(i=0;i<rows;i++)
            printf("z");
    }