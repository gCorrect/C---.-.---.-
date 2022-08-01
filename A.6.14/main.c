#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a,i,p=0;
    scanf("%d",&a);
    for(i=0;i<=32;i++)
    {
        if((a>>i)&1==1)
            p++;
    }
    printf("%d\n",p);
    return 0;
}
