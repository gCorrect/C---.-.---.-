#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=0;
    float d,h,i;
    scanf("%f%f",&h,&d);
    for(i=h;i>h/4;i=i-i*d)
    {
        p++;
        printf("%f\n",i);
    }
    printf("%d\n",p);
    return 0;
}
