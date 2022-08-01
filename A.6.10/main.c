#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,max=0,min=0;
    while (a!=0)
    {
        scanf("%d",&a);
        if (a>0)
        {
            if (a>max)
            max=a;
        }
        if (a<0)
        {
            if (a<min)
            min=a;
        }
    }
    if (max==0 && min<0)
    printf("mono arnhtikous evales\n");
    else if (min==0 && max>0)
    printf("mono thetikousŝ evales\n");
    else
    printf("mikroteros arnthikos: %d\tmegalyteros thetikos: %d\n",min,max);
    return 0;
}
