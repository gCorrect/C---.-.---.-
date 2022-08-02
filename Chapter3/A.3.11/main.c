#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tetra,mono,result;
    printf("Type a four-digit number and a single-digit number respectively: \n");
    scanf("%d%d",&tetra,&mono);
    apot=(tetra/1000)*10000+((tetra%1000)/100)*1000+mono*100+(tetra%100/10)*10+tetra%10;
    printf("Result: %d",result);
    return 0;
}
