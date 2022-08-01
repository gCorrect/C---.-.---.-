#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,**p3,**p4,a=3,b=2,temp;
    p1=&a;
    p2=&b;
    p4=&p2;
    p3=&p1;
    temp=**p3;
    **p3=**p4;
    **p4=temp;
    printf(" %d \t%d\n",**p3,**p4);
    return 0;
}
