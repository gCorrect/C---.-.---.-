#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum;
    float j=1.2345;
    sum=0;
    for (i=1;i<3;i++)
    {

        sum=sum+printf("%.2f\n",j);
    }
    printf("val=%d\n",sum);
    return 0;
}
