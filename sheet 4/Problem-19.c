
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,x,f=1;
    float s=0;
    scanf("vv %d",&x);


    while(1){	
            i=1;
        s=(float)(pow(x,i)*pow(-1,i))/(f*i);
    ++i;
    }
    printf("%f",s);
    return 0;
}