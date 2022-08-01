#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,j,k;
    scanf("%d",&a);
    for (i=a;i>=1;i--)
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
    printf("Hello world!\n");
    return 0;
}
