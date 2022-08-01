#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float a,max1,max2;
    scanf("%f",&a);
    max1=a;
    max2=a;
    for (i=1;i<10;i++)
       {
        scanf("%f",&a);
        if (a>max1)
        {
        max2=max1;
        max1=a;
        }
        if (a>max2 && a<max1)
            max2=a;
       }
    printf("%f\n%f\n",max1,max2);
    return 0;
}
