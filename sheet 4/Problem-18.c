#include <stdio.h>

int main()
{
    int num,newNum, result,reversed=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    newNum =num;

    do{
        result=num%10;
        reversed = reversed * 10 + result;
        num= num/10;
    }
    while(num != 0);

    if(reversed==newNum)
        printf("yes");

        else 
            printf("no");

        
    return 0;
}