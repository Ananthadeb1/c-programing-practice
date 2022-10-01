#include <stdio.h>
#include <stdlib.h>

struct conv
{
    int conv_num; 
    int b_num;
    int m;
    int exta[100];
    char ext[50];
};

struct conv Get_number_and_base();
struct conv Convert_number(struct conv n1);
struct conv Show_number(struct conv n2);

void main()
{
    struct conv inp1,inp2;
    inp1 = Get_number_and_base();
    inp2 = Convert_number(inp1);
    Show_number(inp2);
}

struct conv Convert_number(struct conv n)
{
    int k=0;
    while (n.conv_num != 0)
    {
        n.exta[k] = n.conv_num % n.b_num;
        n.conv_num = n.conv_num/n.b_num;
        if(n.exta[k] == 10)
            n.ext[k]='A';
        else if(n.exta[k] == 11)
            n.ext[k]='B';
        else if(n.exta[k] == 12)
            n.ext[k]='C';
        else if(n.exta[k] == 13)
            n.ext[k]='D';
        else if(n.exta[k] == 14)
            n.ext[k]='E';
        else if(n.exta[k] == 15)
            n.ext[k]='F';
        k++;
    }
    n.m = k-1;
    return n;
}


struct conv Show_number(struct conv n2)
{
    while (n2.m >= 0)
    {
        if (n2.exta[n2.m] >= 10 && n2.exta[n2.m] <= 15)
            printf("%c",n2.ext[n2.m]);
        else
            printf("%d",n2.exta[n2.m]);
        n2.m--;
    }
}

struct conv Get_number_and_base()
{
    struct conv get_input;
    printf(" convertion number: ");
    scanf("%d", &get_input.conv_num);
    printf("b_num (between 2 and 16): ");
    scanf("%d", &get_input.b_num);
    if (get_input.b_num >= 2 && get_input.b_num <= 16)
        return get_input;
    else
        printf("Wrong Base");
}