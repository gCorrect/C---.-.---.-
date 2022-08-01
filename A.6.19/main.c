#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n;
    scanf("%d%d",&m,&n);
    for (i=0;i<=m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("+--");
        }
        printf("+");
        printf("\n");
        if (i<m){
         for(j=0;j<n;j++)
        {
            printf("|  ");
        }
        printf("|");
        printf("\n");
        }
    }
    printf("Hello world!\n");
    return 0;
}
