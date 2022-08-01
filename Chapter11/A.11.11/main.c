#include <stdio.h>
#include <stdlib.h>

#define SIZE1 2
#define SIZE2 2

void max_row_min_col(int a[][SIZE2],int row,int col);

int main()
{
    int a[SIZE1][SIZE2],row,col,i,j;

    for(i=0;i<SIZE1;i++)
    {
        for(j=0;j<SIZE2;j++)
        {
            scanf("%d",a[i]+j);
            fflush(stdin);
        }
    }

    printf("dose arithmo grammhs : ");
    scanf("%d",&row);
    printf("dose arithmo sthlhs : ");
    scanf("%d",&col);

    for(i=0;i<SIZE1;i++)/*elegxei apla an mphkan oi times ston pinaka a*/
    {
        printf("\n");
        for(j=0;j<SIZE2;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    max_row_min_col(a,row,col);
    return 0;
}

void max_row_min_col(int a[][SIZE2],int row,int col)
{
    int i,j,min,max;
        max=a[row-1][0];
        for(j=1;j<SIZE2;j++)
        {
            if (a[row-1][j]>max)
                max=a[row-1][j];
        }
       printf("max: %d",max);/*antistoixa bgainei kai to min*/

}
