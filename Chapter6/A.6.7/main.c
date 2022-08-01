#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,temp,p=1;
    scanf("%d",&a);
        temp=a;
    for (i=1;i<100;i++)
    {
        p++;
        scanf("%d",&a);
        if(a>temp)
            break;
        temp=a;
    }
    printf("plhthos eisaxthewn arithmwn:%d\n",p);
    return 0;
}
