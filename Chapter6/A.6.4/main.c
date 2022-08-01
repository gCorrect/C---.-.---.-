#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,step;
    scanf("%f%f%f",&a,&b,&step);
    while (a<=b)
    {
        printf("%f\t%f\n",a,a*1.6);
        a=a+step;
    }
    printf("Hello world!\n");
    return 0;
}
