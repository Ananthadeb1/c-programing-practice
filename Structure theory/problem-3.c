#include <stdio.h>
#include <string.h>
#include<math.h>

 struct data
    {
        float x1,x2,y1,y2; 
        float result;  
    };
    struct data d;

   float distance(){
            float n = ((d.x2 - d.x1) * (d.x2 - d.x1)) + ((d.y2-d.y1) * (d.y2-d.y1));
        d.result = sqrt (n);
        return d.result;
    }

void main()
{

    scanf("%f", &d.x1);
    scanf("%f", &d.y1);
    scanf("%f", &d.x2);
    scanf("%f", &d.y2);

    printf("The distance is %.2f unit",distance());

    
}