#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=2,  y=-3;
    printf("x + yj = %d%dj\n",x,y);
    printf("x - yj = %d+%dj\n",x,-y);
    printf("y + xj =%d+%dj\n",y,x);
    printf("y - xj =%d%dj\n",y,-x);
    return 0;
}
