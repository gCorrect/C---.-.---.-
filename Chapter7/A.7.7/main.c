#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
int main()
{
    int i;
    double a[SIZE],diff,min;
    for (i=0;i<SIZE;i++)
    {
        scanf("%lf",&a[i]);
    }
    diff=a[0]-a[1];
        if (diff<0)
            diff=-diff;
        min=diff;
        printf("diafora %f\n",diff);
    for (i=1;i<SIZE-1;i++)
    {
        diff=a[i]-a[i+1];
        if (diff<0)
            diff=-diff;
        if (diff<min)
            min=diff;
        printf("diafora %f\n",diff);
    }
    printf("h mikroterh diafora einai%f\n",min);
    return 0;
}
