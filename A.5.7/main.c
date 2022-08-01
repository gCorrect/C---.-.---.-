#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h; /*den ebala oles tis metablhtes sth scanf gia eynohtoys logoyw.Pantws doyleyei*/
    scanf("%x:%x:%x",&a,&b,&c);
    if (a==b && b==c)
    printf("broadcoast\n");
    else if (a & 1)
        printf("multi");
    else
        printf("uni");
    return 0;
}
