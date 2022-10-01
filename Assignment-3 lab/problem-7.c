#include<stdio.h>
#include<math.h>

struct num
{
    int a[100];
    int n;
    float m;
};

struct num Takeinput();
struct num CalcMean(struct num b, int e);
struct num Calc_std_deviation(struct num c, int f);

void main()
{
    struct num a_inp_r, a_M, a_div;
    int x;
    a_inp_r = Takeinput();
    x = a_inp_r.n;
    a_M=CalcMean(a_inp_r,x);
    a_div = Calc_std_deviation(a_M, x);
}

struct num Takeinput()
{
    struct num a;
    int i;
    printf("ary size: ");
    scanf("%d",&a.n);
    printf("Enter Input: ");
    for ( i = 0; i < a.n; i++)
        scanf("%d", &a.a[i]);
    return a;
}

struct num CalcMean(struct num b, int e)
{
    int i,tem=0;
    for (i = 0; i < b.n; i++)
        tem += b.a[i];
    b.m = tem/e;
    return b;
}

struct num Calc_std_deviation(struct num c, int f)
{
    int i, tem=0; float result=0;
    for ( i = 0; i < f; i++)
    {
        tem += pow((c.a[i] - c.m),2);
    }
    result = sqrt(tem/f);
    printf("Result: %.2f", result);
}