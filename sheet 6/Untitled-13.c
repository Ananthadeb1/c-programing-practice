    #include<stdio.h>

    void main(){
        
        int i,rows,space,num;
        printf("Enter a number : ");
        scanf("%d",&rows);

        for(i=1;i<=rows;i++){
            for(num=1;num<=i; num++){
                printf("%d",num);
            }
                for(space=i*2;space<(rows*2)-1;space++){
                printf("_");
            }
            
            for(num=i;num>=1;num--){
                if(num==rows)
                    continue;
                printf("%d",num);
            }
            printf("\n");
        }
    }