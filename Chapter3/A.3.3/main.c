#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hl_patera,hl_paidi,x;
    printf("dose hlikia patera kai paidiou ");
    scanf("%d%d",&hl_patera,&hl_paidi);
    x=hl_patera-2*hl_paidi;/*hl_patera+x=2(hl_paidi+x) ->x=hl_patera-2*hl_paidi*/
    printf("Tha ginei se %d xronia kai o pateras tha einai %d kai to paidi tha einai %d\n",x,hl_patera+x,hl_paidi+x);
    return 0;
}
