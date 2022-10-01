#include <stdio.h>

void main()
 
   {
     int i,j,m,n,a[100][100],b[100][100],k,l;
     
	 
	 printf("Enter two number : ");
     scanf("%d%d",&n,&m);


       for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
	           scanf("%d",&a[i][j]);
            }
        }  
             
       for(i=0;i<n;i++){
            for(j=0;j<m;j++){
			   for(k=0; k<n;k++){
                for(l=0;l<m;l++){
                    if(i==k && j==l){
                        continue;
                    }
                    else if(a[k][l] == a [i][j]){
                        a[k][l] = -1;
                    }
                }
               }
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        } 
    }


    