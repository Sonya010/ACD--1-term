#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x;
   float y;
   printf("input x\n");
    scanf("%f", &x);

    if((x>-15) && (x<=3))
    {
        y=4*x*x+2;
        printf("y=%f\n", y);
        printf("x belongs to the interval (-15;3] \n");

    }
    else
    {
        if((x<=-30) || (x>20))
        {
            y=3*x*x*x/4-5;
            printf("y=%f\n", y);
            printf("x belongs to the interval (-infinity;-30) u (20;+infinity) \n");
        }
        else
            {
                printf("no value\n");
            }
    }
return 0;
}
