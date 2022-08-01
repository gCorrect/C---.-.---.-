#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *p1,*p2,a,b;
    p1=&a;
    p2=&b;
    printf("dose dyo arithmous!\n");
    scanf("%lf%lf",p1,p2);
    printf("%f  %f",*p1,*p2);
    if (*p1+*p2<0)
        printf("%f",-(*p1+*p2));
    else
        printf("%f",*p1+*p2);
    return 0;
}
