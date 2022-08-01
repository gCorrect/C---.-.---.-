#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,p=0,temp,i;
    scanf("%d",&a);
    temp=a;
    for(i=2;i<=10;i++)
    {
        scanf("%d",&a);
        if (temp+1==a)
            p++;
        temp=a;
    }
    printf("\n%d\n",p);
    return 0;
}
