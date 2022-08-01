#include <stdio.h>
#include <stdlib.h>

int main()
{
    int therm,ab_p=0,eq_p=0,un_p=0,p=0;
    do
    {
        scanf("%d",&therm);
        if (therm<40)
            ab_p++;
        else if(therm==40)
            eq_p++;
        else if (therm>40)
            un_p++;
        p++;
    }while(therm!=1000);
    printf("pososto katw apo 40: %f\npososto iso me saranta: %f\npososto anw twn 40: %f\n",un_p*100.0/p,eq_p*100.0/p,ab_p*100.0/p);
    return 0;
}
