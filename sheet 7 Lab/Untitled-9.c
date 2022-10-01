#include <stdio.h>

void main()
 
   {
     int i,j,a[100][100],sum=0,n;
	 
	 printf("Enter a odd number : ");
     scanf("%d", &n); 

       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           scanf("%d",&a[i][j]);
            }
        }  
            
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
			   if(i==0)
                    sum += a[i][j];
                else if(i==n-1)
                    sum += a[i][j];
                else if (i==j)
                {
                    if (i==0 || i== n-1)
                        continue;
                    else
                        sum += a[i][j];
                }
                
            }
        } 

        for(i=1;i<n-1;i++){
            for(j=n-1;j>=1;j--){

                if(i==(n-1)/2){
                        break;
                }
                else if(j==(n-1)-i){
                        sum += a[i][j];
        }
            }
        }
        printf("Sum = %d",sum); 
    }