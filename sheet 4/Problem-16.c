#include<stdio.h>

int main(){
    int n1, n2, i, gcd,lcm;  
    printf ( " Enter any two numbers: ");  
    scanf ( "%d %d", &n1, &n2);   


    for( i = 1; i <= n1 && i <= n2; ++i)  
    {  
        if (n1 % i ==0 && n2 % i == 0)  
            gcd = i;
    }    
    lcm = (n1*n2)/gcd;
    printf (" GCD : %d\n LCD : %d", gcd, lcm);
    
    

    return 0;
}