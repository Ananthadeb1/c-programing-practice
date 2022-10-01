#include <stdio.h>  
  
int main ()  
{  
    int arr[100];  
    int pos, i, num; 
    printf (" \n Enter the number: ");  
    scanf (" %d", &num);  
       
    for (i = 0; i < num; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }  

    printf( "Position: ");  
    scanf (" %d", &pos);  

    if (pos >= num+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (i = pos - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1];
        }  

        for (i = 0; i< num - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d ", arr[i]);  
        }  
    }  
    return 0;  
}  