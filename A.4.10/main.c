#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int a,i=32;
    printf("dose akeraio: ");
    scanf("%d",&a);
   while ((a>>(i-1) & 1)==0)
    {
        i--;
    }
    i=pow(2,i);
    printf("%d",i);
    return 0;
}
