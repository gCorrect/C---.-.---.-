#include <stdio.h>
#include <stdlib.h>

int main()/*de douleyei swsta*/
{
    int a,b,c;
    scanf("%d",&a);
    do
    {
        printf("dose b mikrotero toy a\n");
        scanf("%d",&b);
    }while (b>=a);
    do
    {
        printf("dose c mikrotero tou b\n");
        scanf("%d",&c);
    }while (b>=c);
    printf("%d %d %d\n",a,b,c);
    return 0;
}
