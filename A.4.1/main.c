// page 105
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,min;
    printf("dose toys dyo arithmous: \n");
    scanf("%d%d",&a,&b);
    min=(a<b)*a+(a>b)*b; // comparison gives us 0 or 1. Thus we can insert the right number
    printf("o mikros einai: %d\n",min);
    return 0;
}
