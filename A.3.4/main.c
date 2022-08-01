#include <stdio.h>
#include <stdlib.h>

int main()
{
    int epit,apot;
    printf("dose epityxontes ki apotyxontes : ");
    scanf("%d%d",&epit,&apot);
    printf("success rate: %.2f\nfail rate: %.2f",(float)epit/(epit+apot)*100,(float)apot/(epit+apot)*100);
    return 0;
}
