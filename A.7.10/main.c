#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4
int main()
{
    int a[ROWS][COLS],i,j,k,row_max[COLS];
    for(i = 0; i < ROWS; i++)
    {
        for(j=0; j < COLS; j++)
        {
        printf("Enter number %d %d: ",i+1,j+1);
        scanf("%d", &a[i][j]);

        }
    }
    for(i = 0; i < ROWS; i++)
    {
        row_max[i]=a[i][0];
        for(j=1; j < COLS; j++)
        {
        if (row_max[i]<a[i][j])
        {
            row_max[i]=a[i][j];
            for (k=0;k<j;k++)
                a[i][k]=row_max[i];
        }
        }
    }
    for(i = 0; i < ROWS; i++)
    {
        for(j=0; j < COLS; j++)
        {
        printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
