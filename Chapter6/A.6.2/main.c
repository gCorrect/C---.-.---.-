#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0,p=0;
    do
    {
        scanf("%d",&a);
        sum+=a;
        p++;
    }while (sum<=100);
    printf("athroisma: %d plhthos: %d\n",sum,p);
    return 0;
}
