#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter the number to reverse: ");
    scanf("%d",&num);

    do{
        result=num%10;
        printf("%d",result);
        num= num/10;
    }
    while(num != 0);

    return 0;
}