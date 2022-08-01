#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *p1,a;
    p1=&a;
    scanf("%lf",p1);
    printf("to dekadiko tou meros einai: %f\n",*p1-(int)*p1);
    return 0;
}
