#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    printf("dose tis dyo times : \n");
    scanf("%lf%lf%",&a,&b);
    if (a>0)
    {
        if (b>=0)
            printf("%f",a*b);
        else
            printf("%f",a*(-b));
    }
    else if (a<0)
    {
        if (b>=0)
            printf("%f",a*(-b));
        else
            printf("%f",a*b);
    }
    return 0;
}
