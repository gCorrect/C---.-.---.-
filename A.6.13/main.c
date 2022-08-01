#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1=4,s2=1,p=0;
    do
    {
        s1+=6;
        s2+=7;
        p++;
        printf("%d\t%d\n",s1,s2);
    }while (s2-s1<100);
    printf("%d\n",p);
    return 0;
}
