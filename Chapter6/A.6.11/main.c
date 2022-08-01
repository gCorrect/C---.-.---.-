#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,p=0,p_t=0;
    do
    {
        scanf("%d",&a);
        if (a<0)
            p++;
        if (a>0)
            p_t++;
    }while (p_t<10);
    printf("%d\t%d\n",p,p_t);
    return 0;
}
