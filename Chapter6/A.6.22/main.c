#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s1=0;
    do
        {
            scanf("%d",&n);
        }while(n>=20 || n<=0);
    for (i=1;i<=n;i++)
    {
        s1+=2*i*2*i;
        printf("%d\n",s1);
    }
    printf("Hello world!\n");
    return 0;
}
