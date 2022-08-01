#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec;
    printf("dose ta deyterolepta: \n");
    scanf("%d",&sec);
    printf("%dh %dm %ds",sec/3600,(sec%3600)/60,sec%60%60);
    return 0;
}
