#include <stdio.h>
#include <stdlib.h>

struct convertor
{
    int main_num; 
    int base;
    int n;
    int reminder[100];
    char rem[20];
};

struct convertor Get_number_and_base();
struct convertor Convert_number(struct convertor num1);
struct convertor Show_number(struct convertor num2);

void main()
{
    struct convertor get1,get2;
    get1 = Get_number_and_base();
    get2 = Convert_number(get1);
    Show_number(get2);
}

struct convertor Convert_number(struct convertor num)
{
    int x=0;
    while (num.main_num != 0)
    {
        num.reminder[x] = num.main_num % num.base;
        num.main_num = num.main_num/num.base;
        if(num.reminder[x] == 10)
            num.rem[x]='A';
        else if(num.reminder[x] == 11)
            num.rem[x]='B';
        else if(num.reminder[x] == 12)
            num.rem[x]='C';
        else if(num.reminder[x] == 13)
            num.rem[x]='D';
        else if(num.reminder[x] == 14)
            num.rem[x]='E';
        else if(num.reminder[x] == 15)
            num.rem[x]='F';
        x++;
    }
    num.n = x-1;
    return num;
}


struct convertor Show_number(struct convertor num2)
{
    while (num2.n >= 0)
    {
        if (num2.reminder[num2.n] >= 10 && num2.reminder[num2.n] <= 15)
            printf("%c",num2.rem[num2.n]);
        else
            printf("%d",num2.reminder[num2.n]);
        num2.n--;
    }
}

struct convertor Get_number_and_base()
{
    struct convertor get_input;
    printf("number for convertion: ");
    scanf("%d", &get_input.main_num);
    printf("base number(between 2 and 16): ");
    scanf("%d", &get_input.base);
    if (get_input.base >= 2 && get_input.base <= 16)
        return get_input;
    else
        printf("Wrong Base");
}