#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
int main()
{
    int a[ROWS][COLS],i,j,sum[COLS]={0},min,posj;
    for (i=0;i<ROWS; i++)
    {
        for (j=0;j<COLS; j++)
        {
            scanf("%d",a[j]+i);
            sum[i]=+*(a[j]+i);
        }
    }
    min=*sum;
    for (j=0;j<COLS; j++)
    {
        if (sum[j<min])
            posj=j+1;
    }
    for (i=0;i<ROWS; i++)
    {
        for (j=0;j<COLS; j++)
        {
            printf("%3d ",*(a[i]+j));
        }
        printf("\n");
    }
    printf("%d",posj);
    return 0;
}
