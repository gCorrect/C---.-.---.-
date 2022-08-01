#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,j,k;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        for (k=1;k<=a-i;k++)
            {
                printf(" ");
            }
        for (j=i;j>=1;j--)
        {
            printf("*");
        }

     printf("\n");
    }
    for (i=1;i<=a-1;i++)
    {
        for (j=a-1;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
