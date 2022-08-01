#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float j;
    printf("dose thetiko akeraio: ");
    scanf("%d",&a);
    a=a+50;
    j=(float)a/100;
    a=(int)j*100;
    printf("stoggylos einai: %d\n",a);
    return 0;
}
