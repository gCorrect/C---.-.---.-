#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    printf("dose a kai b: \n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=(a^b)^a;
    b=(temp^b)^b;
    printf("einai oi arithmoi: %d %d\n",a,b);
    return 0;
}
