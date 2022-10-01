#include <stdio.h>

void main()
 
   {
     int i,j,n,m,sum=0;
	 
	 printf("Enter two numbers : ");
     scanf("%d%d", &n,&m); 

        int a[100][100];

       for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
	           scanf("%d",&a[i][j]);

               sum +=a[i][j];
            }
            
        }
        printf("\n");

        printf("sum = %d",sum);  
   }