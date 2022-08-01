#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,*p3,a,b,c;
    p1=&a;
    p2=&b;
    p3=&c;
    do
    {
        printf("dose mono arnhtikes times alliws 8a ginei epnalalhpsh eisodoy\n");
        scanf("%d%d%d",p1,p2,p3);
    }while (*p1>=0 || *p2>=0 ||*p3>=0);
    if (*p1<*p2 && *p2<*p3)
    printf("einai auksousa seira\n");
    else
    printf("den einai ayksousa\n");
    return 0;
}
