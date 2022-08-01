#include <stdio.h>
#include <stdlib.h>

#define SIZE1 2
#define SIZE2 2

void array_sum(int a[][SIZE2],int b[][SIZE2],int sum[SIZE1][SIZE2]);

int main()
{
    int a[SIZE1][SIZE2],b[SIZE1][SIZE2],sum[SIZE1][SIZE2],i,j;

    for(i=0;i<SIZE1;i++)
    {
        for(j=0;j<SIZE2;j++)
        {
            scanf("%d",a[i]+j);
            fflush(stdin);
        }
    }
    for(i=0;i<SIZE1;i++)
    {
        for(j=0;j<SIZE2;j++)
        {
            scanf("%d",b[i]+j);
            fflush(stdin);
        }
    }
    for(i=0;i<SIZE1;i++)/*elegxei apla an mphkan oi times ston pinaka a*/
    {
        printf("\n");
        for(j=0;j<SIZE2;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    array_sum(a,b,sum);
    return 0;
}

void array_sum(int a[][SIZE2],int b[][SIZE2],int sum[SIZE1][SIZE2])
{
    int i,j;

    for(i=0;i<SIZE1;i++)
    {
        for(j=0;j<SIZE2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<SIZE1;i++)
    {
        printf("\n");
        for(j=0;j<SIZE2;j++)
        {
            printf("%d ",sum[i][j]);
        }
    }
}
