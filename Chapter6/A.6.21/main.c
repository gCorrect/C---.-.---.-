#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float i,s1=0;
    do
        {
            scanf("%d",&n);
        }while(n<3);
    for (i=3;i<=n;i++)
    {
        s1+=1/((i-2)*i);
        printf("%f\n",s1);
    }
    printf("Hello world!\n");
    return 0;
}
